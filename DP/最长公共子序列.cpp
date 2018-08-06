//求两个字符串最长公共子序列的长度
#include <cstring>
#include <iostream>
using namespace std;

#define Max 100
 
char str1[Max],str2[Max];
int Maxlen[Max][Max];  //存放str1[i]  str2[j]的最长公共子序列长度
 
int main()
{
    while(cin >> str1 >> str2)
    {
        int lenth1=strlen(str1);
        int lenth2=strlen(str2);
        for(int i = 0; i <= lenth1; i++)
        {
            Maxlen[i][0]=0;
        } 

        for(int j = 0; j <= lenth2; j++)
        {
            Maxlen[0][j]=0;
        }

        for(i = 1;i <= lenth2; i++)
            for(j = 1; j <= lenth1; j++) 
            {
                if(str1[i-1] == str2[j-1])
                    Maxlen[i,j] = Maxlen[i-1,j-1] + 1;

                else
                    Maxlen[i,j] = max(Maxlen[i-1,j],Maxlen[i,j-1]);
            }

        cout << Maxlen[lenth1][lenth2] << endl;
    }

    return 0;
}