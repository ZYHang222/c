void moveZeroes(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] = 0)
        {
            for (int j = i + 1; j < numsSize; j++)
            {
                nums[j-1] = nums[j];
            }
            nums[numsSize - 1] = 0;
            i--;
        }
    }
}
