#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
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

    // Delete the first node
    if (head != NULL) {
        struct Node* temp = head;
        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }

        free(temp);
    }
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    return 0;
}
