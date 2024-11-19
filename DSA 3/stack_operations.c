#include <stdio.h>
#include <stdlib.h>

struct stack
{
      int size;
      int top;
      int *arr;
};

int isEmpty(struct stack *ptr)
{
      if (ptr->top == -1)
      {
            return 1;
      }
      else
      {
            return 0;
      }
}

int isFull(struct stack *ptr)
{
      if (ptr->top == ptr->size - 1)
      {
            return 1;
      }
      else
      {
            return 0;
      }
}

void push(struct stack* ptr, int val){
      if(isFull(ptr)){
            printf("Stack overflow\n");
      }
      else{
            ptr->top++;
            ptr->arr[ptr->top] = val;
      }
}

int pop(struct stack* ptr){
      if(isFull(ptr)){
            printf("Stack Underflow! cannot pop form the stack\n");
            return 0;
      }
      else{
           int val = ptr->arr[ptr->top];
           ptr->top--;

      }
}
int main()
{
      struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
      sp->size = 10;
      sp->top = -1;
      sp->arr = (int *)malloc(sp->size * sizeof(int));
      printf("Stack has been created successfully\n");

      printf("Before pushing, Full: %d\n", isFull(sp));
      printf("Before pushing, Empty: %d\n", isEmpty(sp));
      push(sp, 1);
      push(sp, 23);
      push(sp, 99);
      push(sp, 75);
      push(sp, 3);
      push(sp, 64);
      push(sp, 57);
      push(sp, 46);
      push(sp, 89);
      push(sp, 6);// Pushing 10 value
      //push(sp, 46);// Stack overflow since the stack is 10 
      printf("After pushing, Full: %d\n", isFull(sp));
      printf("After pushing, Empty:%d\n", isEmpty(sp));

      printf("Popped %d from the stack\n", pop(sp));  //--- Last in first out!

      return 0;
}