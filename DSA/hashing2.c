#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10 

struct Node {
    int key;
    struct Node* next;
};

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void insert(struct Node* hashTable[], int key) {
    int index = hashFunction(key);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
    printf("Inserted %d at index %d\n", key, index);
}

struct Node* search(struct Node* hashTable[], int key) {
    int index = hashFunction(key);
    struct Node* current = hashTable[index];
    while (current != NULL) {
        if (current->key == key) {
            return current;
        }
        current = current->next;
    }
    return NULL; 
}

void display(struct Node* hashTable[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        struct Node* current = hashTable[i];
        printf("Index %d: ", i);
        while (current != NULL) {
            printf("%d -> ", current->key);
            current = current->next;
        }
        printf("NULL\n");
    }
}

int main() {
    struct Node* hashTable[TABLE_SIZE] = {NULL};

    insert(hashTable, 12);
    insert(hashTable, 22);
    insert(hashTable, 32);

    int keyToSearch = 22;
    struct Node* result = search(hashTable, keyToSearch);
    if (result != NULL) {
        printf("Key %d found in hash table.\n", keyToSearch);
    } else {
        printf("Key %d not found in hash table.\n", keyToSearch);
    }

    display(hashTable);

    return 0;
}
