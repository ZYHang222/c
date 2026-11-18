#include <stdio.h>

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int maxcount = 0;
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > maxcount)
            maxcount = count;
    }

    return maxcount;
}

int main(void)
{
    int a[] = {1, 1, 0, 1, 1, 1};
    int b[] = {1, 1, 1, 0, 1};
    int c[] = {0, 0, 0};
    int d[] = {1};

    printf("最长在末尾：结果 %d，预期 3\n",
           findMaxConsecutiveOnes(a, 6));
    printf("最长在前面：结果 %d，预期 3\n",
           findMaxConsecutiveOnes(b, 5));
    printf("全是 0：结果 %d，预期 0\n",
           findMaxConsecutiveOnes(c, 3));
    printf("只有一个 1：结果 %d，预期 1\n",
           findMaxConsecutiveOnes(d, 1));

    return 0;
}