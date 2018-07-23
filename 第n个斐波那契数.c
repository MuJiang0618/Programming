#include <stdio.h>
//求第n个斐波那契数
long long Fibnaci(unsigned int n ) {   //1 1 2 3 5 8 13 ...
    if(n <= 2) {
        return 1;
    }
    long long Fib_one = 1, Fib_two = 1, Fib_N = 0;
    for(int i = 2; i < n; i++) {
        Fib_N = Fib_one + Fib_two;
        Fib_one = Fib_two;
        Fib_two = Fib_N;
    }

    return Fib_N;
}

int main() {
    unsigned int n;
    scanf("%d",&n);
    printf("%d\n", Fibnaci(n) );
    return 0;
}