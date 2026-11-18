#include <stdio.h>

char *toLowerCase(char *s)
{
    char k = 'a' - 'A';
    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += k;
        }
    }
    return s;
}

int main(void)
{
    // 使用字符数组，方便直接修改其中的字符
    char s[] = "Hello ABC 123!";

    printf("转换前：%s\n", s);

    toLowerCase(s);

    printf("转换后：%s\n", s);
    printf("预期值:hello abc 123!\n");

    return 0;
}