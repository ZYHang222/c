#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

/* 在链表头部插入新节点（头插法）
   时间复杂度：O(1)
   返回值：新的头节点指针 */
struct Node* insertAtHead(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;  /* 新节点指向原头节点 */
    return newNode;         /* 新节点成为新的头节点 */
}

/* 在链表尾部插入新节点（尾插法）
   时间复杂度：O(n)，需要遍历到尾部 */
struct Node* insertAtTail(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;  /* 空链表，新节点即为头节点 */
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;  /* 遍历到最后一个节点 */
    }
    current->next = newNode;  /* 尾部节点指向新节点 */
    return head;
}

/* 在指定位置后插入新节点
   时间复杂度：O(n)，需要先找到 prevNode */
void insertAfter(struct Node* prevNode, int value) {
    if (prevNode == NULL) {
        printf("前驱节点不能为空\n");
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    /* 关键：先让新节点指向后继，再让前驱指向新节点 */
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void printList(struct Node* head) {
    struct Node* cur = head;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtHead(head, 30);  /* 链表: 30 */
    head = insertAtHead(head, 20);  /* 链表: 20 -> 30 */
    head = insertAtHead(head, 10);  /* 链表: 10 -> 20 -> 30 */

    printf("头插后: "); printList(head);  /* 输出: 10 20 30 */

    head = insertAtTail(head, 40);  /* 链表: 10 -> 20 -> 30 -> 40 */
    printf("尾插后: "); printList(head);  /* 输出: 10 20 30 40 */

    insertAfter(head->next, 25);    /* 在 20 后面插入 25 */
    printf("中间插入后: "); printList(head);
    /* 输出: 10 20 25 30 40 */
    return 0;
}