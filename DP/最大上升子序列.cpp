//输出最大上升子序列的长度 
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define Max 1010
int data[Max],Maxlen[Max];
int main()
{
    int n;
    cin >> n;  //一共n个数据
    //int data[Max],Maxlen[Max];
    for(int i = 0;i < n;i++)
    {
        cin >> data[i];
        Maxlen[i]=1;  //初始化
    }

    //求data[i]的Maxlen
    for(int i = 2;i <= n;i++)
    {
        for(int j = 1;j < i; j++)
        {
            if(data[i] > data[j])
            {
                Maxlen[i] = max(Maxlen[i],Maxlen[j]+1);  //要与原Maxlen[i]比较是因为新值可能小于原值
            }
        }
    }

    cout << * max_element(Maxlen + 1,Maxlen + n + 1);
    return 0;
}