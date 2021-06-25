
int singleNumber(int* nums, int numsSize)
{
    int i, k = 0;
    for (i = 0; i < numsSize; i ++) 
    {
        k = k ^ nums[i];  // a ^ a equals to 0; 0 ^ a equals to a
    }
    return k;
}