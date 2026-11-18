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
int mostWordsFound(char **sentences, int sentencesSize)
{
    int count = 0; // 记录最多的单词数

    for (int i = 0; i < sentencesSize; i++)
    {
        int temp = 0;  // 当前字符下标
        int words = 1; // 当前句子的单词数

        while (sentences[i][temp] != '\0')
        {
            if (sentences[i][temp] == ' ')
            {
                words++;
            }

            temp++; // 每检查一个字符，都向后移动
        }

        if (count < words)
        {
            count = words;
        }
    }

    return count;
}

int maximumWealth(int **accounts, int accountsSize, int *accountsColSize)
{
    int maxWealth = 0;
    for (int i = 0; i < accountsSize; i++)
    {
        int currentWealth = 0;
        for (int j = 0; j < accountsColSize[i]; j++)
        {
            currentWealth += accounts[i][j];
        }
        if (currentWealth > maxWealth)
        {
            maxWealth = currentWealth;
        }
    }
    return maxWealth;
}

int diagonalSum(int **mat, int matSize, int *matColSize)
{
    int sum = 0;
    for (int i = 0; i < matSize; i++)
    {
        sum += mat[i][i]; // 主对角线元素
        if (i != matSize - 1 - i)
        {
            sum += mat[i][matSize - 1 - i]; // 副对角线元素
        }
    }
    return sum;
}

bool checkXMatrix(int **grid, int gridSize, int *gridColSize)
{
    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < gridColSize[i]; j++)
        {
            if (i == j || i + j == gridSize - 1)
            {
                if (grid[i][j] == 0)
                {
                    return false;
                }
            }
            else
            {
                if (grid[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int countNegatives(int **grid, int gridSize, int *gridColSize)
{
    int count = 0;
    for (int i = 0; i < grid; i++)
    {
        for (int j = 0; j < gridColSize; j++)
        {
            if (grid[i][j] < 0)
            {
                count++;
            }
        }
    }
    return count;
}
int singleNumber(int *nums, int numsSize)
{
    int result = 0;
    int temp = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (i != j && nums[i] == nums[j])
            {

                temp++;
            }
        }
        if (temp > 0)
        {
            temp = 0;
        }
        else
        {
            result = nums[i];
            return result;
        }
    }
    return 0;
}

char findTheDifference(char *s, char *t)
{
    char result = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        result ^= s[i];
    }
    for (int i = 0; t[i] != '\0'; i++)
    {
        result ^= t[i];
    }
    return result;
}
bool isMonotonic(int *nums, int numsSize)
{
    int increasing = 1;
    int decreasing = 1;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            decreasing = 0;
        }
        if (nums[i] < nums[i - 1])
        {
            increasing = 0;
        }
    }

    return increasing || decreasing;
}
int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            if (count > maxCount)
            {
                maxCount = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    return maxCount;
}
bool isMonotonic(int* nums, int numsSize) {
int increasing = 1;
int decreasing = 1;
for (int i = 1; i < numsSize; i++) {
    if (nums[i] > nums[i - 1]) {
        decreasing = 0;
    }
    if (nums[i] < nums[i - 1]) {
        increasing = 0;
    }
    
}
return increasing || decreasing;}