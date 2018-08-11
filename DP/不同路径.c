// 2018/08/11
//LeetCode 62

#include <malloc.h>
int uniquePaths(int m, int n) {
    if (m == 1 && n == 1)
        return 1;

    if (m == 0 || n == 0)
        return 0;

    int *array = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == 0 && j == 0) {
                array[j] = 1;
                continue;        
            }

            if (i == 0) {
                array[j] = array[j-1];
            }

            else if (j == 0) {
                array[j] = array[j];
            }

            else {
                array[j] = array[j] + array[j-1];
            }
        }
    }
    
    return array[n-1];
}