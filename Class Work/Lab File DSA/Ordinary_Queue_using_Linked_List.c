#include <stdio.h>
#include <stdlib.h>
struct Node
{
      int data;
      struct Node *next;
};
struct Queue
{
      struct Node *front;
      struct Node *rear;
};
struct Node *newNode(int data)
{
      struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
      if (temp == NULL)
      {
            printf("Memory allocation failed!\n");
            exit(EXIT_FAILURE);
      }
      temp->data = data;
      temp->next = NULL;
      return temp;
}
struct Queue *createQueue()
{
      struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
      if (q == NULL)
      {
            printf("Memory allocation failed!\n");
            exit(EXIT_FAILURE);
      }
      q->front = q->rear = NULL;
      return q;
}
void enqueue(struct Queue *q, int data)
{
      struct Node *temp = newNode(data);
      if (q->rear == NULL)
      {
            q->front = q->rear = temp;
            return;
      }
      q->rear->next = temp;
      q->rear = temp;
}
int dequeue(struct Queue *q)
{
      if (q->front == NULL)
      {
            printf("Queue is empty\n");
            return -1;
      }
      struct Node *temp = q->front;
      int data = temp->data;
      q->front = q->front->next;
      if (q->front == NULL)
      {
            q->rear = NULL;
      }
      free(temp);
      return data;
}
void displayQueue(struct Queue *q)
{
      if (q->front == NULL)
      {
            printf("Queue is empty\n");
            return;
      }
      struct Node *temp = q->front;
      printf("Queue elements: ");
      while (temp != NULL)
      {
            printf("%d ", temp->data);
            temp = temp->next;
      }
      printf("\n");
}
int main()
{
      struct Queue *q = createQueue();
      enqueue(q, 56);
      enqueue(q, 66);
      enqueue(q, 78);
      printf("Initial Queue:\n");
      displayQueue(q);
      printf("Dequeued: %d\n", dequeue(q));
      printf("Queue after dequeue:\n");
      displayQueue(q);
      return 0;
}