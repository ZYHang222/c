#include <stdio.h>

int mostWordsFound(char **sentences, int sentencesSize)
{
    int maxWords = 0;
    
    for (int i = 0; i < sentencesSize; i++)
    {
        int count = 0;
        for (int j = 0; sentences[i][j] != '\0'; j++)
        {
          if (sentences[i][j] == ' ') count++;
            
        }
        count++;
        if(count>maxWords)maxWords=count;
    }
    return maxWords;
}

int main(void)
{
    char *sentences1[] = {
        "I love C",
        "hello world",
        "this is a good day"};

    char *sentences2[] = {
        "hello",
        "learning C"};

    char *sentences3[] = {
        "one"};

    printf("测试1：结果=%d，预期=5\n",
           mostWordsFound(sentences1, 3));

    printf("测试2：结果=%d，预期=2\n",
           mostWordsFound(sentences2, 2));

    printf("测试3：结果=%d，预期=1\n",
           mostWordsFound(sentences3, 1));

    return 0;
}