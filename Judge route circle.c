bool judgeCircle(char* moves) {
    //设置竖直、水平2个栈
    int up = 0,left = 0;
    int i = 0;
    while(moves[i] != '\0') {
        switch( moves[i] ) {
            case 'U':
            up++;break;

            case 'D':
            up--;break;

            case 'L':
            left++;break;

            case 'R':
            left--;break;
        }
        i++;
    }

    return (up == 0) && (left == 0) ;
}