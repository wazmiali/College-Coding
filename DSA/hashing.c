#include<stdio.h>
#include<stdlib.h>

#define TABLE_SIZE 10

struct Node{
      int key;
      struct Node* next;
};

int hashFunction(int key){
      return key % TABLE_SIZE;
};
