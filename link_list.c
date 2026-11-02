#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

/* 遍历并打印链表的所有节点
   从头节点开始，沿着 next 指针逐个访问，直至 NULL */
void traverse(struct Node* head) {
    struct Node* current = head;  /* 从头部开始 */
    printf("链表内容: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;  /* 移动到下一个节点 */
    }
    printf("NULL\n");
}

/* 创建包含 n 个节点的链表（1, 2, 3, ..., n） */
struct Node* createList(int n) {
    if (n <= 0) return NULL;

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;

    struct Node* tail = head;  /* tail 始终指向最后一个节点 */
    for (int i = 2; i <= n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;
        tail->next = newNode;  /* 将新节点连接到链表末尾 */
        tail = newNode;           /* 更新 tail 指针 */
    }
    return head;
}



int main() {
    struct Node* head = createList(5);
    traverse(head);
    /* 输出: 链表内容: 1 -> 2 -> 3 -> 4 -> 5 -> NULL */
    return 0;
}