#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() 
{
    struct Node* head = NULL;
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    node1->data = 10;
    node1->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 30;
    node3->next = NULL;
    head = node1;
    if (head != NULL) {
        if (head->next == NULL) {
            free(head);
            head = NULL;
        } else {
            struct Node* current = head;
            while (current->next->next != NULL) {
                current = current->next;
            }
            struct Node* temp = current->next;
            current->next = NULL;
            free(temp);
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
