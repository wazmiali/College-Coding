#include <stdio.h>
#include <stdlib.h>

// Node structure representing an element in the priority queue
struct Node
{
      int data;
      int priority;
      struct Node *next;
};

// PriorityQueue structure to manage the queue
struct PriorityQueue
{
      struct Node *front;
};

// Function to create a new node
struct Node *newNode(int data, int priority)
{
      struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
      if (!temp)
      {
            printf("Memory allocation failed!\n");
            exit(EXIT_FAILURE);
      }
      temp->data = data;
      temp->priority = priority;
      temp->next = NULL;
      return temp;
}

// Function to create a priority queue
struct PriorityQueue *createPriorityQueue()
{
      struct PriorityQueue *pq = (struct PriorityQueue *)malloc(sizeof(struct PriorityQueue));
      if (!pq)
      {
            printf("Memory allocation failed!\n");
            exit(EXIT_FAILURE);
      }
      pq->front = NULL;
      return pq;
}

// Function to enqueue an element into the priority queue
void enqueue(struct PriorityQueue *pq, int data, int priority)
{
      struct Node *temp = newNode(data, priority);
      // If queue is empty or the new node has a higher priority
      if (pq->front == NULL || pq->front->priority < priority)
      {
            temp->next = pq->front;
            pq->front = temp;
      }
      else
      {
            struct Node *current = pq->front;
            // Traverse to the right position
            while (current->next != NULL && current->next->priority >= priority)
            {
                  current = current->next;
            }
            temp->next = current->next;
            current->next = temp;
      }
}

// Function to dequeue an element from the priority queue
int dequeue(struct PriorityQueue *pq)
{
      if (pq->front == NULL)
      {
            printf("Priority Queue is empty\n");
            return -1;
      }
      struct Node *temp = pq->front;
      int data = temp->data;
      pq->front = pq->front->next;
      free(temp); // Free the memory of the dequeued node
      return data;
}

// Function to display the contents of the priority queue
void displayPriorityQueue(struct PriorityQueue *pq)
{
      if (pq->front == NULL)
      {
            printf("Priority Queue is empty\n");
            return;
      }
      struct Node *temp = pq->front;
      while (temp != NULL)
      {
            printf("Data: %d, Priority: %d\n", temp->data, temp->priority);
            temp = temp->next;
      }
}

int main()
{
      struct PriorityQueue *pq = createPriorityQueue();
      enqueue(pq, 20, 1);
      enqueue(pq, 40, 3);
      enqueue(pq, 50, 2);
      printf("Priority Queue contents:\n");
      displayPriorityQueue(pq);
      printf("Dequeued: %d\n", dequeue(pq)); // Fixed error here
      printf("Priority Queue after dequeue:\n");
      displayPriorityQueue(pq);
      return 0;
}
