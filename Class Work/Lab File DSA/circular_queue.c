#include <stdio.h>
#include <stdlib.h>
#define MAX 5

// Circular Queue Structure
struct CircularQueue {
    int items[MAX];
    int front;
    int rear;
};

// Create a Circular Queue
struct CircularQueue *createCircularQueue() {
    struct CircularQueue *q = (struct CircularQueue *)malloc(sizeof(struct CircularQueue));
    q->front = q->rear = -1;
    return q;
}

// Check if the queue is full
int isFull(struct CircularQueue *q) {
    return (q->rear + 1) % MAX == q->front;
}

// Check if the queue is empty
int isEmpty(struct CircularQueue *q) {
    return q->front == -1;
}

// Enqueue an element
void enqueue(struct CircularQueue *q, int data) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    q->items[q->rear] = data;
    printf("Enqueued: %d\n", data);
}

// Dequeue an element
int dequeue(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = q->items[q->front];
    if (q->front == q->rear) {
        // Queue is empty after dequeue
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return data;
}

// Display the queue
void displayQueue(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    int i = q->front;
    printf("Queue elements: ");
    while (1) {
        printf("%d ", q->items[i]);
        if (i == q->rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// Main function
int main() {
    struct CircularQueue *q = createCircularQueue();
    enqueue(q, 35);
    enqueue(q, 45);
    enqueue(q, 55);
    displayQueue(q);
    printf("Dequeued: %d\n", dequeue(q));
    displayQueue(q);
    return 0;
}
