#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    int position;
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    node1->data = 10;
    node1->prev = NULL;
    node1->next = NULL;

    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    node2->data = 20;
    node2->prev = node1;
    node2->next = NULL;

    node1->next = node2;

    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    node3->data = 30;
    node3->prev = node2;
    node3->next = NULL;

    node2->next = node3;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 40;

    if (head == NULL) {
        head = newNode;
    } else if (position == 1) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    } else {
        struct Node* current = head;
        int count = 1;
        while (current != NULL && count < position - 1) {
            current = current->next;
            count++;
        }

        if (current != NULL) {
            newNode->prev = current;
            newNode->next = current->next;

            if (current->next != NULL) {
                current->next->prev = newNode;
            }

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
