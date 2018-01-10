#include <iostream>
#include <algorithm>
using namespace std;

#define Max 101
int D[Max][Max];
int n;
int maxSum[Max][Max];  //存放每个顶点到底边的最大和

int MaxSum(int i,int j) //得到（i,j)顶点到底边路径的最大和,避免重复计算该点到底边的最长距离
{
    if(maxSum[i][j] != -1)
        return maxSum[i][j];

    else if(i == n)
        maxSum[i][j] = D[i][j];

    else
    {
        int x = MaxSum(i+1,j);
        int y = MaxSum(i+1,j+1);
        maxSum[i][j] = max(x,y) + D[i][j];
    }

    return maxSum[i][j];
}



int main()
{
    int i,j;
    cin >> n;       //一共n行

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cin >> D[i][j];    //输入初始三角形
            maxSum[i][j] = -1;    //初始化，没有计算过的顶点置-1
        }
    }

    cout << MaxSum(1,1) << endl; 
    return 0;
}