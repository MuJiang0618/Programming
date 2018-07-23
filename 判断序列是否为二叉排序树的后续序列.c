// -*- coding:'utf-8' -*-
//判断一个序列是否为一棵二叉排序树的后序序列
#include <stdio.h>

bool Verify_SequenceOfBST(int Sequence[],int len)
{
    int i = 0;
    for(i; i < len-1; i++) {
        if(Sequence[i] > Sequence[len-1]) {
            break;
        }
    }

    int j = i;
    for(j; j < len -1; j++) {
        if( Sequence[j] < Sequence[len-1] ) {
            return false;
        }
    }

    bool lresult = true;
    if(i > 0) {
        lresult = Verify_SequenceOfBST(Sequence,i);
    }

    bool rresult = true;
    if(i < len-1)
        rresult = Verify_SequenceOfBST(Sequence + i,len-1-i);

    return (lresult && rresult);
}

int main()
{
    int array[7] = {5,7,6,9,13,12,8};
    int result = Verify_SequenceOfBST(array,7);
    printf("%d\n",result);
    return 0;
}