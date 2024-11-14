// Modulo division using hashFunction 
#include<stdio.h>

#define TABLE_SIZE 20

int hashTable[TABLE_SIZE];
int occupied[TABLE_SIZE] = {0};

int hashFunction(int key){
      return key % TABLE_SIZE;
}

void insert(int key){
      int index = hashFunction(key);

      if(!occupied[index]){
         hashTable[index] = key;
         occupied[index] = 1;
         printf("Inserted %d at index %d \n", key, index);
      }
      else{
            printf("Collision detected for key %d at index %d, unable to insert.\n", key, index);
      }
}

void search(int key){
      int index = hashFunction(key);

      if(occupied[index] && hashTable[index] == key){
            printf("Key %d found at index %d\n", key, index);
      }
      else{
            printf("Key %d not found\n", key);
      }
}

void display(){
      for(int i = 0; i < TABLE_SIZE; i++){
            if(occupied[i]){
                  printf("Index %d: %d\n", i, hashTable[i]);
            }
            else{
                  printf("Index %d: EMPTY\n", i);
            }
      }
}

int main(){
      insert(10);
      insert(22);
      insert(32);
      insert(4);
      insert(15);
      insert(28);
      insert(17);
      
      display();

      search(15);
      search(5);

      return 0;
}
