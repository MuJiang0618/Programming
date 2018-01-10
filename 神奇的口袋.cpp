/*有一个神奇的口袋，用这个口袋可以变出一些物品，这些物品的总体积必须是40.John现在有n(1<=n<=20)个
想要得到的物品，每个物品的体积分别为v1,v2,v3,v4......vn,John可以从这些物品中选择一些，如果选出的物体
总体积是40，那么利用这个神奇的口袋他就可以得到这些物品，现在问，John有多少种不同的选择物品并能得到这
些物品的方式*/

#include <iostream>
using namespace std;

int volumn[30];
int N;

int Ways(int v,int m)  //用前m个物品凑出体积v
{
    if(v == 0) return 1;
    if(m <= 0) return 0;
    return Ways(v,m - 1) + Ways(v - volumn[m],m - 1) //不选第m个物品凑出体积v的种数+选上第m个物品的种数
}

int main()
{
    cin >> N;   //输入物品个数
    for(int i = 1; i <= N; i++)
    {
        cin >> volumn[i];   //输入每个物品的体积
    }

    cout << Ways(40,N) ;
    return 0;
}