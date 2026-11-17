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

int busyStudent(int *startTime, int startTimeSize, int *endTime, int endTimeSize, int queryTime)
{
    int count = 0;
    for (int i = 0; i < startTimeSize; i++)
    {
        if (startTime[i] <= queryTime && queryTime <= endTime[i])
        {
            count++;
        }
    }
    return count;
}

int finalValueAfterOperations(char **operations, int operationsSize)
{
    int count = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        if (operations[i][1] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return count;
}
int mostWordsFound(char** sentences, int sentencesSize) {
    int count = 0;  // 记录最多的单词数

    for (int i = 0; i < sentencesSize; i++) {
        int temp = 0;   // 当前字符下标
        int words = 1;  // 当前句子的单词数

        while (sentences[i][temp] != '\0') {
            if (sentences[i][temp] == ' ') {
                words++;
            }

            temp++;  // 每检查一个字符，都向后移动
        }

        if (count < words) {
            count = words;
        }
    }

    return count;
}

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxWealth = 0;
    for (int i = 0; i < accountsSize; i++) {
        int currentWealth = 0;
        for (int j = 0; j < accountsColSize[i]; j++) {
            currentWealth += accounts[i][j];
        }
        if (currentWealth > maxWealth) {
            maxWealth = currentWealth;
        }
    }
    return maxWealth;
}