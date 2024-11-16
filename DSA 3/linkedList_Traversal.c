#include <stdio.h>
#include <stdlib.h>

struct Node
{
      int data;
      struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
      while (ptr != NULL)
      {
            printf("Element: %d\n", ptr->data);
            ptr = ptr->next;
      }
}
int main()
{
      struct Node *head;
      struct Node *second;
      struct Node *third;
      struct Node *fourth;
      struct Node *fifth;

      // Allocate the memory for nodes in the linked list in heap
      head = (struct Node *)malloc(sizeof(struct Node));
      second = (struct Node *)malloc(sizeof(struct Node));
      third = (struct Node *)malloc(sizeof(struct Node));
      fourth = (struct Node *)malloc(sizeof(struct Node));
      fifth = (struct Node *)malloc(sizeof(struct Node));

      // Link first and second nodes
      head->data = 7;
      head->next = second;

      // Link second and third nodes
      second->data = 11;
      second->next = third;

      // Link third and fourth nodes
      third->data = 41;
      third->next = fourth;

      // Link fourth and fifth nodes
      fourth->data = 45;
      fourth->next = fifth;

      // Terminate the list at the fifth node
      fifth->data = 66;
      fifth->next = NULL;

      linkedListTraversal(head);

      return 0;
}