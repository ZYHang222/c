#include <stdio.h>
#include <windows.h>

int main(void)
{
    const char *text = "Hello world!";

    while (*text != '\0') {
        putchar(*text++);
        fflush(stdout);
        if (*text != '\0') {
            Sleep(500);
        }
    }
    putchar('\n');
    return 0;
}
