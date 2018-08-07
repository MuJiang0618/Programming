int minPathSum(int** grid, int gridRowSize, int gridColSize) {
    if (grid == NULL)
        return 0;

    int left = 0, above = 0;

    for (int i = 0; i < gridRowSize; ++i)  //遍历行
    {
        for (int j = 0; j < gridColSize; ++j)  //遍历列
        {
            if (i == 0 && j == 0)
                continue;

            if (i == 0)  //如果上面没有格子,就只要加上左格子
            {
                grid[i][j] += grid[i][j-1];
            }
            else if (j == 0)  //如果左边没有格子就只要加上上格子
            {
                grid[i][j] += grid[i-1][j];
            }

            else {
                left = grid[i][j-1], above = grid[i-1][j];
                grid[i][j] += (left > above)?above:left;  //取left和above中较小值
            }
        }
    }

    return grid[gridRowSize-1][gridColSize-1];
}