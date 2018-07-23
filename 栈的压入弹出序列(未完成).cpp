//判断栈的压入、弹出序列是否相匹配可行
#include <stdio.h>

bool Match(int *p1,int *p2,int len)  //p3为压入序列，p4弹出序列
{
    if(!p1 || !p2) return false;
    
    //建立栈
    int stack[10];
    int top = -1;
    int i = 0,j = 0;
    for(i; i < len; i++) {
        if( stack[top] != p2[i] ) {
            for(j; j < len; j++) {
                top ++;
                stack[top] = p1[j];
                if( stack[top] = p2[i]) {
                    break;
                }
            }

            if(j == len) {   //如果在输入序列中未找到要弹出的元素，则序列不匹配
                return false;
            }
        }

        else
            top--;
    }
    
    return true;
}

int main()
{
    int input[5];
    int output[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d",&input[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        scanf("%d",&output[i]);
    }
    
    printf("结果为:%d",Match(input,output,5) );
}
