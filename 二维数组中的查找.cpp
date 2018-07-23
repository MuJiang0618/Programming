bool Find(int *matrix,int rows,int columns,int amount)
{
    if(matrix != NULL && rows > 0 && columns > 0){
        int row = 0;
        int column = columns - 1;
        while(row < rows && column >= 0){
            if(matrix[row * columns + column] == amount){
                return true;
            }

            else if(matrix[row * columns + column] < amount){
                row ++;
            }

            else{
                column --;
            }
        }
    }

    return false;
}