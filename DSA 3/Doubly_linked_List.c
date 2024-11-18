// Doubly  linked list 
#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Function to traverse and print the doubly linked list
void linkedListTraversal(struct Node *head) {
    struct Node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to insert a node at the beginning of the doubly linked list
struct Node *insertAtFirst(struct Node *head, int data) {
    // Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;

    // Update the previous head node if it exists
    if (head != NULL) {
        head->prev = newNode;
    }

    // Update the head to the new node
    head = newNode;
    return head;
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;

    // Allocate memory for the nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Initialize and link the nodes
    head->data = 4;
    head->prev = NULL;
    head->next = second;

    second->data = 3;
    second->prev = head;
    second->next = third;

    third->data = 6;
    third->prev = second;
    third->next = fourth;

    fourth->data = 1;
    fourth->prev = third;
    fourth->next = NULL;

    // Display the doubly linked list before insertion
    printf("Doubly Linked List before insertion:\n");
    linkedListTraversal(head);

    // Insert new nodes at the beginning
    head = insertAtFirst(head, 54);
    head = insertAtFirst(head, 58);
    head = insertAtFirst(head, 59);

    // Display the doubly linked list after insertion
    printf("Doubly Linked List after insertion:\n");
    linkedListTraversal(head);

    return 0;
}

