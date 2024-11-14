#include<stdio.h>
#include<stdlib.h>

// Define the structure for the Node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new nod
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to print the Linked List
void printList(struct Node* head) {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating node
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);
    struct Node* fourth = createNode(40);
    struct Node* fifth = createNode(50);

    // Linking the node
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Print the linked list
    printList(head);

    return 0;
}
