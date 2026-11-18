void moveZeroes(int *nums, int numsSize)
{
     int k = 0;  // 用于记录非零元素的索引
    for (int i = 0; i < numsSize; i++)
    {
       if(nums[i] != 0)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    while (k < numsSize)
    {
        nums[k] = 0;
        k++;
    }
}
