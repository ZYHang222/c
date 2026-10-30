#include <stdio.h>

/* 函数功能：打印 n×n 的乘法表
   时间复杂度：O(n²)
   外层循环 n 次，内层循环 n 次，共 n×n 次 */
void printMulTable(int n) {
    for (int i = 1; i <= n; i++) {      /* 外层循环 O(n) */
        for (int j = 1; j <= n; j++) {  /* 内层循环 O(n)，嵌套后总次数 n² */
            printf("%d\t", i * j);      /* O(1) 操作 */
        }
        printf("\n");
    }
}
/* 整体时间复杂度：O(n × n) = O(n²) */

int main() {
    printMulTable(5);  /* 输出 5×5 乘法表 */
    return 0;
}