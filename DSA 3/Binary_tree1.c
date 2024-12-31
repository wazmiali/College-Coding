#include<stdio.h>
#include<stdlib.h>

struct node{
      int data;
      struct Node* left;
      struct Node* right;
};

struct Node* creatnode(int data){
      struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
      newNode->data = data;
      newNode->left = NULL;
      newNode->right = NULL;
      return newNode;

}


