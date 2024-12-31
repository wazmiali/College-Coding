#include<stdio.h>
#include<stdlib.h>

struct Node{
      int data;
      struct Node* left;
      struct Node* right;      
};

struct Node* createNode(int data){
      struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
      newNode->data = data;
      newNode->left = newNode->right = NULL;
      return newNode;
}

void inorderTraversal(struct Node* root){
      if(root == NULL)
      return;
      inorderTraversal(root->left);
      printf("%d", root->data);
      inorderTraversal(root->right);
}

void preorderTraversal(struct Node* root){
      if(root == NULL)      
      return;
      printf("%d", root->data);
      preorderTraversal(root->left);
      preorderTraversal(root->right);
}

void preorderTraversal(struct Node* root){
      if(root==NULL)
            printf("%d", root->data);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
            printf("%d", root->data);
      
}

void printTree(struct Node* root, int space){
      if(root == NULL)
      return;
      space +=5;

      printTree(root->right, space);
      for(int i = 5; i <space; i++)
      
            printf(" ");
            printf("%d\n root->data");
            printf(root->left, space);
      
}

int main(){
      struct Node* root = creatNode(1);
      root->left = createNode(2);
      root->right = createNode(3);
      root->left->left = createNode(4);
      root->left->right = createNode(5);
      root->right->left = createNode(6);
      root->right->right = createNode(7);

      printf("In-order Traversal: ");
      inorderTraversal(root);
      printf("\n");

      printf("Pre-order Traversal: ");
      preorderTraversal(root);
      printf("\n");

      printf("Post-order Traversal: ");
      postorderTraversal(root);
      printf("\n");

      printf("Binary Tree: \n");
      printTree(root, 0);

      return 0;
}


// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*) malloc (sizeof (struct Node));
//     newNode -> data = data;
//     newNode -> left = newNode -> right = NULL;
//     return newNode;
// }

// void inorderTraversal(struct Node* root) {
//     if (root == NULL)
//         return;
//     inorderTraversal(root->left);
//     printf("%d ", root->data);
//     inorderTraversal(root->right);
// }

// void preorderTraversal(struct Node* root) {
//     if (root == NULL)
//         return;
//     printf("%d ", root->data);
//     preorderTraversal(root->left);
//     preorderTraversal(root->right);
// }

// void postorderTraversal(struct Node* root) {
//     if (root == NULL)
//         return;
//     postorderTraversal(root->left);
//     postorderTraversal(root->right);
//     printf("%d ", root->data);
// }

// void printTree(struct Node* root, int space) {
//     if (root == NULL)
//         return;

//     space += 5;

//     printTree(root->right, space);

//     for (int i = 5; i < space; i++)
//         printf(" ");
//     printf("%d\n", root->data);

//     printTree(root->left, space);
// }

// int main() {
//     struct Node* root = createNode(1);
//     root -> left = createNode(2);
//     root -> right = createNode(3);
//     root -> left -> left = createNode(4);
//     root -> left -> right = createNode(5);
//     root -> right -> right = createNode(6);
//     root -> right -> right = createNode(7);

//     printf("In-order Traversal: ");
//     inorderTraversal(root);
//     printf("\n");

//     printf("Pre-order Traversal: ");
//     preorderTraversal(root);
//     printf("\n");

//     printf("Post-order Traversal: ");
//     postorderTraversal(root);
//     printf("\n");

//     printf("Binary Tree: \n");
//     printTree(root, 0);
//  }