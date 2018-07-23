//Leetcode 463
int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    if(grid == NULL || gridRowSize <= 0 || gridColSize <= 0) 
        return 0;
    //grid = (int **) malloc ( gridRowSize * sizeof(int *));
    //1土地  0 水
    int i = 0, j = 0;
    int sum = 0;
    int count = 4;
    for(i; i < gridRowSize; i++) {
        for(j; j < gridColSize; j++) {
            if( grid[i][j] == 0)
                continue;

            else {
                if( grid[i-1][j] == 1 && (i-1) >= 0) {   //如果该土地上面为土地
                    count --;
                }

                if( grid[i+1][j] == 1 && (i+1) <= gridRowSize-1) {   //如果该土地下面面为土地
                    count --;
                }

                if( grid[i][j-1] == 1 && (j-1) >= 0) {   //如果该土地左面为土地
                    count --;
                }

                if( grid[i][j+1] == 1 && (j+1) <= gridColSize-1) {   //如果该土地右面为土地
                    count --;
                }
                sum += count;
                count = 4;
            }
        }
    }

    return sum;
}