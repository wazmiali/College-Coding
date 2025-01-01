#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
    int data; 
    struct Node* next; 
    struct Node* prev; 
}; 
// Function to create a new node 
struct Node* newNode(int data) { 
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
    if (!temp) { 
        printf("Memory allocation failed\n"); 
        exit(EXIT_FAILURE); 
    } 
    temp->data = data; 
    temp->next = temp->prev = NULL; 
    return temp; 
} 
// Function to insert a new node into the circular doubly linked list 
void insert(struct Node** head_ref, int new_data) { 
    struct Node* new_node = newNode(new_data); 
    if (*head_ref == NULL) { 
        *head_ref = new_node; 
        new_node->next = new_node->prev = new_node;  // Make it circular 
        return; 
    } 
    struct Node* last = (*head_ref)->prev; 
    // Insert the new node at the end 
    last->next = new_node; 
    new_node->prev = last;
      new_node->next = *head_ref; 
    (*head_ref)->prev = new_node; 
} 
// Function to display the circular doubly linked list 
void display(struct Node* head) { 
    if (head == NULL) { 
        printf("List is empty\n"); 
        return; 
    } 
    struct Node* temp = head; 
    printf("Traversal in forward direction: "); 
    do { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } while (temp != head); 
    printf("HEAD\n"); 
    // Reverse traversal 
    printf("Traversal in reverse direction: "); 
    struct Node* last = head->prev; 
    temp = last; 
    do { 
        printf("%d -> ", temp->data); 
        temp = temp->prev; 
    } while (temp != last); 
    printf("HEAD\n"); 
} 
// Function to delete a node by its value 
void deleteNode(struct Node** head_ref, int key) { 
    if (*head_ref == NULL) { 
        printf("List is empty\n"); 
        return; 
    } 
    struct Node* temp = *head_ref; 
    struct Node* prev = NULL; 
    // Find the node to delete 
    do { 
        if (temp->data == key) break; 
        prev = temp; 
        temp = temp->next; 
    } while (temp != *head_ref);
      if (temp->data != key) { 
        printf("Key not found\n"); 
        return; 
    } 
    // If only one node is present 
    if (temp->next == temp) { 
        *head_ref = NULL; 
        free(temp); 
        return; 
    } 
    // Update links to remove the node 
    if (temp == *head_ref) *head_ref = temp->next; 
    temp->prev->next = temp->next; 
    temp->next->prev = temp->prev; 
    free(temp); 
} 
// Function to count nodes in the list 
int count(struct Node* head) { 
    if (head == NULL) return 0; 
    int cnt = 0; 
    struct Node* temp = head; 
    do { 
        cnt++; 
        temp = temp->next; 
    } while (temp != head); 
    return cnt; 
} 
// Function to search for a node by its value 
struct Node* search(struct Node* head, int key) { 
    if (head == NULL) return NULL; 
    struct Node* temp = head; 
    do { 
        if (temp->data == key) return temp; 
        temp = temp->next; 
    } while (temp != head); 
    return NULL; 
} 
int main() { 
    struct Node* head = NULL;
      // Insert elements into the circular doubly linked list 
    insert(&head, 5); 
    insert(&head, 6); 
    insert(&head, 2); 
    insert(&head, 1); 
    printf("Circular Doubly Linked List:\n"); 
    display(head); 
    printf("Count of nodes: %d\n", count(head)); 
    deleteNode(&head, 2); 
    printf("After deleting 2:\n"); 
    display(head); 
    struct Node* found = search(head, 3); 
    if (found) { 
        printf("Found: %d\n", found->data); 
    } else { 
        printf("Not found\n"); 
    } 
    return 0; 
}