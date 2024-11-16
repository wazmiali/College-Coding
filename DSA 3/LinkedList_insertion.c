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

// Case 1
// Insert at the beginning 
struct Node *insertAtFirst(struct Node *head, int data)
{
      struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
      ptr->data = data;

      ptr->next = head;
      return ptr;
}

// Case 2
// Insert in between
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
      struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
      struct Node *p = head;
      int i = 0;

      while (i != index - 1)
      {
            p = p->next;
            i++;
      }
      ptr->data = data;
      ptr->next = p->next;
      p->next = ptr;
      return head;
}

// Case 3
// Insert at the end
struct Node *insertAtEnd(struct Node *head, int data)
{
      struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
      ptr->data = data;
      struct Node *p = head;

      while (p->next != NULL)
      {
            p = p->next;
      }
      p->next = ptr;
      ptr->next = NULL;
      return head;
}

// Case 4 
// Insert after a Node
struct Node *insertAtNode(struct Node *head, struct Node* prevNode, int data)
{
      struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
      ptr->data = data;
      
      ptr->next = prevNode ->next;
      prevNode->next = ptr;

      
      return head;
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

      printf("Linked list before insertion\n");
      linkedListTraversal(head);
      // head = insertAtFirst(head, 56);
      // head = insertAtIndex(head, 56, 1);

      head = insertAtNode(head, second, 44);
      printf("\n Linked list after insertion\n");
      linkedListTraversal(head);

      return 0;
}