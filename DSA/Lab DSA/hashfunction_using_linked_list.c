#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 20

// Node structure for linked list
struct Node {
    int key;
    struct Node* next;
};

struct Node* hashTable[TABLE_SIZE] = {NULL};

// Hash function
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Insert a key into the hash table
void insert(int key) {
    int index = hashFunction(key);

    // Create a new node for the key
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->next = NULL;

    // Insert the node at the beginning of the list at index
    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }
    printf("Inserted %d at index %d \n", key, index);
}

// Search for a key in the hash table
void search(int key) {
    int index = hashFunction(key);
    struct Node* temp = hashTable[index];

    while (temp != NULL) {
        if (temp->key == key) {
            printf("Key %d found at index %d\n", key, index);
            return;
        }
        temp = temp->next;
    }
    printf("Key %d not found\n", key);
}

// Delete a key from the hash table
void deleteKey(int key) {
    int index = hashFunction(key);
    struct Node* temp = hashTable[index];
    struct Node* prev = NULL;

    while (temp != NULL) {
        if (temp->key == key) {
            if (prev == NULL) {
                // Delete the first node in the list
                hashTable[index] = temp->next;
            } else {
                // Delete the node at position other than the first
                prev->next = temp->next;
            }
            free(temp);
            printf("Key %d deleted from index %d\n", key, index);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("Key %d not found, unable to delete\n", key);
}

// Display the hash table
void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d:", i);
        struct Node* temp = hashTable[i];
        if (temp == NULL) {
            printf(" EMPTY");
        }
        while (temp != NULL) {
            printf(" %d ->", temp->key);
            temp = temp->next;
        }
        printf(" NULL\n");
    }
}

int main() {
    insert(10);
    insert(22);
    insert(32);
    insert(4);
    insert(15);
    insert(28);
    insert(17);

    display();

    search(15);
    search(5);

    deleteKey(15);  // Delete key 15
    deleteKey(5);   // Attempt to delete key 5 which is not present

    display();  // Display after deletion

    return 0;
}
