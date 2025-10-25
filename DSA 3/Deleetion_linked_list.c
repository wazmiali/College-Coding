// Deleetion_linked_list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
      int data;
      struct Node *next;
};
// function 
void linkedListTraversal(struct Node *ptr)
{
      while (ptr != NULL)
      {
            printf("Element: %d\n", ptr->data);
            ptr = ptr->next;
      }
}

// Case1: Deletion the first element from the linked list
struct Node *deleteAtFirst(struct Node *head, int index)
{
      struct Node *ptr = head;
      head = head->next;
      free(ptr); // Freeing the memory allocated to the removed node
      return head;
}

// Case2: Deletion the element at a given index from the linked list.
struct Node *deleteAtIndex(struct Node *head, int index)
{
      struct Node *p = head;
      struct Node *q = head->next;
      for (int i = 0; i < index - 1; i++)
      {

            p = p->next;
            q = q->next;
      }
      p->next = q->next;
      free(q);
      return head;
}

// Case3: Deleting the last element
struct Node *deleteAtLast(struct Node *head)
{
      struct Node *p = head;
      struct Node *q = head->next;
      while (q->next != NULL)
      {

            p = p->next;
            q = q->next;
      }

      p->next = NULL;
      free(q);
      return head;
}

// Case4: Deletion the element with a given value from the linked list.
struct Node *deleteAtIndex(struct Node *head, int value)
{
      struct Node *p = head;
      struct Node *q = head->next;
      while (q->data != value && q->next != NULL)
      {

            p = p->next;
            q = q->next;
      }
      if (q->data == value)
      {
            p->next = q->next;
            free(q);
      }
      return head;
}

int main()
{
      struct Node *head;
      struct Node *second;
      struct Node *third;
      struct Node *fourth;

      // Allocate the memory for nodes in the linked list in heap
      head = (struct Node *)malloc(sizeof(struct Node));
      second = (struct Node *)malloc(sizeof(struct Node));
      third = (struct Node *)malloc(sizeof(struct Node));
      fourth = (struct Node *)malloc(sizeof(struct Node));

      // Link first and second nodes
      head->data = 4;
      head->next = second;

      // Link second and third nodes
      second->data = 3;
      second->next = third;

      // Link third and fourth nodes
      third->data = 8;
      third->next = fourth;

      // Terminate the list at the fourth node
      fourth->data = 1;
      fourth->next = NULL;

      printf("Linked list before deletion\n");
      linkedListTraversal(head);

      head = deleteAtLast(head);
      printf("Linked list after deletion\n"); // Corrected by adding semicolon
      linkedListTraversal(head);

      return 0;
}



