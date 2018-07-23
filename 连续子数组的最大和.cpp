//连续子数组的最大和

int Max_Sum(int data[],int len)
{
    if(len <= 0 || data==NULL) return 0;

    int current_sum = 0;
    int max_sum = data[0];
    for(int i = 0; i < n; i++) {
        current_sum += data[i];
        if(current_sum < data[i] ) {
            current_sum = data[i];
            max_sum = data[i];
        }
        //如果计入这个数比原来的和小,不作反应,max_sum仍然存有最大和
        if(current_sum > max_sum) {    //如果计入这个数比原来的和大，更新max_sum
            max_sum = current_sum;
        }
    }
    return max_sum;
}

int main()
{
    int data[8] = {1,-2,3,10,-4,7,2,-5};
    int result = Max_Sum(data,8);
    printf("%d\n",result);
}