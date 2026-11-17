int pivotIndex(int *nums, int numsSize)
{
    int total = 0;
    for (int i = 0; i < numsSize; i++)
    {
        total += nums[i];
    }
    int leftsum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        int rightSum = total - leftsum - nums[i];

        if (rightSum == leftsum)
        {
            return i;
        }
        leftsum += nums[i];
        /* 把当前 nums[i] 加入 leftSum */
    }
    return -1;
}

int sumOfUnique(int *nums, int numsSize)
{
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        count += nums[i];
        for (int j = 0; j < numsSize; j++)
        {
            if (i != j && nums[i] == nums[j])
            {
                count -= nums[i];
                break;
            }
        }
    }
    return count;
}