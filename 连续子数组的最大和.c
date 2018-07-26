int maxSubArray(int* nums, int numsSize) {
    if (nums == NULL)
        return 0;

    int maxSum = nums[0], temp_maxSum = nums[0];
    for (int i = 1; i < numsSize; ++i) {
        temp_maxSum += nums[i];

        if (temp_maxSum < nums[i]) {  //如果前面的和是负数
            temp_maxSum = nums[i];      //如果前面的和是负数,那么计入前面的数的和只会让和减小,所以考虑后面的段的和;但是要注意此时还要根据情况判断maxSum,例如-1,-2,遍历到-2时,temp_maxSum = -2,但是maxSum仍然为-1,除非temp_maxSum比maxSum大
            if (temp_maxSum >= maxSum) {
                maxSum = nums[i];
            }
        }
        
        if (temp_maxSum > maxSum) {
            maxSum = temp_maxSum;
        }
    }

    return maxSum;
}