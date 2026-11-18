#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char *s)
{
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] <= 90 && s[i] >= 65)
        {
            s[k] = s[i] + 32;
            k++;
        }
        else if (s[i] <= 122 && s[i] >= 97)
        {
            s[k] = s[i];
            k++;
        }
    }
    int left = 0, right = k;
    whlie(left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        else
        {
            return true;
        }
        left++;right--;
    }
}

int main(void)
{
    char s1[] = "A,b:a";
    char s2[] = "0P";
    char s3[] = " ,!";
    char s4[] = "1A, a1";

    printf("测试1：结果 %s，预期 true\n",
           isPalindrome(s1) ? "true" : "false");
    printf("测试2：结果 %s，预期 false\n",
           isPalindrome(s2) ? "true" : "false");
    printf("测试3：结果 %s，预期 true\n",
           isPalindrome(s3) ? "true" : "false");
    printf("测试4：结果 %s，预期 true\n",
           isPalindrome(s4) ? "true" : "false");

    return 0;
}