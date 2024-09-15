#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int position;
    struct Node* head = NULL;
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));

    // Set data and links
    node1->data = 10;
    node1->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 30;
    node3->next = NULL;
    head = node1;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 50;
    if (head == NULL) {
        head = newNode;
    } else if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        struct Node* current = head;
        int count = 1;
        while (current != NULL && count < position - 1) {
            current = current->next;
            count++;
        }

        if (current != NULL) {
            newNode->next = current->next;
            current->next = newNode;
        } else {
            printf("Invalid position!\n");
        }
    }
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    return 0;
}
