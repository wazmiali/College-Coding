// Binary tree
#include <stdio.h>
#include <malloc.h>

struct node
{
      int data;
      struct node *left;
      struct node *right;
};

struct node *createNode(int data)
{
      struct node *n;                                 // Creating a node pointer
      n = (struct node *)malloc(sizeof(struct node)); // Allocating the memory in the heap
      n->data = data;                                 // setting the data
      n->left = NULL;                                 // Setting the left and right children to NULL.
      n->right = NULL;                                // Setting the left and right children to NULL
      return n;                                       // Finally returning the creating Node.
}

int main()
{
      /*

      // constructing in root node
      struct node *p;
      p = (struct node *)malloc(sizeof(struct node));
      p->data = 2;
      p->left = NULL;
      p->right = NULL;

      // Constructing the first node
      struct node *p1;
      p1 = (struct node *)malloc(sizeof(struct node));
      p->data = 1;
      p1->left = NULL;
      p1->right = NULL;

      // Constructing the second Node
      struct node *p2;
      p2 = (struct node *)malloc(sizeof(struct node));
      p->data = 4;
      p2->left = NULL;
      p2->right = NULL;

      */

      // constructing in root node - Using Function (Recommended)
      struct node *p = createNode(2);
      struct node *p1 = createNode(1);
      struct node *p2 = createNode(4);

      // Linking with root node with left and right children
      p->left = p1;
      p->right = p2;

      return 0;
}