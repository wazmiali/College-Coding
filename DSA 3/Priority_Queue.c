#include <stdio.h>
#include <stdlib.h>

// Define maximum size of the priority queue
#define MAX 10

// Define PriorityQueue structure
typedef struct {
    int items[MAX];
    int size;
} PriorityQueue;

// Define swap function to swap two integers
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Define heapifyUp function to maintain heap property
// during insertion
void heapifyUp(PriorityQueue* pq, int index)
{
    if (index
        && pq->items[(index - 1) / 2] > pq->items[index]) {
        swap(&pq->items[(index - 1) / 2],
             &pq->items[index]);
        heapifyUp(pq, (index - 1) / 2);
    }
}

// Define enqueue function to add an item to the queue
void enqueue(PriorityQueue* pq, int value)
{
    if (pq->size == MAX) {
        printf("Priority queue is full\n");
        return;
    }

    pq->items[pq->size++] = value;
    heapifyUp(pq, pq->size - 1);
}

// Define heapifyDown function to maintain heap property
// during deletion
int heapifyDown(PriorityQueue* pq, int index)
{
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < pq->size
        && pq->items[left] < pq->items[smallest])
        smallest = left;

    if (right < pq->size
        && pq->items[right] < pq->items[smallest])
        smallest = right;

    if (smallest != index) {
        swap(&pq->items[index], &pq->items[smallest]);
        heapifyDown(pq, smallest);
    }
}

// Define dequeue function to remove an item from the queue
int dequeue(PriorityQueue* pq)
{
    if (!pq->size) {
        printf("Priority queue is empty\n");
        return -1;
    }

    int item = pq->items[0];
    pq->items[0] = pq->items[--pq->size];
    heapifyDown(pq, 0);
    return item;
}

// Define peek function to get the top item from the queue
int peek(PriorityQueue* pq)
{
    if (!pq->size) {
        printf("Priority queue is empty\n");
        return -1;
    }
    return pq->items[0];
}

// Define main function
int main()
{
    // Initialize priority queue
    PriorityQueue pq = { { 0 }, 0 };
    // Add items to the queue
    enqueue(&pq, 3);
    enqueue(&pq, 2);
    enqueue(&pq, 15);

    // Dequeue an item and print it
    printf("%d dequeued from queue\n", dequeue(&pq));
    // Print the top item of the queue
    printf("Top element is %d\n", peek(&pq));

    return 0;
}