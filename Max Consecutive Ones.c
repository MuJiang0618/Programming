//leetcode 485
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int current_sum = 0, max_sum = 0;
    for(int i = 0; i < numsSize; i++) {
        if( nums[i] == 1) {
            current_sum ++;
        }

        else {
            if(current_sum > max_sum) {
                max_sum = current_sum;                
            }

            current_sum = 0;
        }
    }

    if(current_sum > max_sum) {
        max_sum = current_sum;
    }
    return max_sum;
}