int missingNumber(int* nums, int numsSize) {
    int i, k;
#if 0 //The #if preprocessor directive evaluates the expression or condition. If condition is true, it executes the code otherwise #elseif or #else or #endif code is executed. 
    k = numsSize;
    for (i = 0; i < numsSize; i ++) {
        k = k ^ i ^ nums[i];
    }
#else
    k = numsSize * (numsSize + 1) / 2;
    for (i = 0; i < numsSize; i ++) {
        k -= nums[i];
    }
#endif
    return k;
}
