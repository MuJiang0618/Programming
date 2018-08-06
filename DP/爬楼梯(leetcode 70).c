int climbStairs(int n) {  //
    int a = 1, b = 2;
    int c = 0;
    switch(n) {
        case 1: return a;
        case 2: return b;
        case 0: return c;
    }
    for(int i = 3; i <= n; i++)  {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
