#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Erro ao alocar memória para o novo nó.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertSorted(Node** head, int data) {
    Node* newNode = createNode(data);

    if (*head == NULL || data < (*head)->data) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL && current->next->data < data) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void displayList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    insertSorted(&head, 3);
    insertSorted(&head, 8);
    insertSorted(&head, 4);
    insertSorted(&head, 2);
    insertSorted(&head, 5);

    printf("Lista ordenada: ");
    displayList(head);

    return 0;
}
