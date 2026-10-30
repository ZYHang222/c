#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello, world!\n");
        fclose(file);
    }

    char buffer[100];
    file = fopen("example.txt", "r");
    if (file != NULL) {
        fgets(buffer, sizeof(buffer), file);  // 读取整行
        printf("Read from file: %s", buffer);  // fgets 会保留换行符
        fclose(file);
    }
    return 0;
}
