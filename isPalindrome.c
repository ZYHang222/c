bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    int temp = x;
    long long reverse = 0;

    while (temp > 0)
    {
        int dight = temp % 10; /* 取出个位 */
        reverse = reverse * 10 + dight;
        temp/=10;/* 拼到 reverse 后面 */
        /* 去掉 temp 的个位 */
    }

    return reverse == x;
}