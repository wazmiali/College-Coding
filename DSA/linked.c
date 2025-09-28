// Linked list
#include<stdio.h>
#include<stdlib.h>

      #define MAX 5  // Maximum sie of the stack 

// stack structure
      struct stack {
            int arr[MAX];
            int top;
      };
// Function initialize the stack
      void initStack(struct stack* stack){
            stack -> top = -1;
            
      }
// Function to check the stack is empty
      int isEmpty(struct stack* stack){
            return stack -> top == -1;
      }

      int isFull(struct stack* stack){
            return stack -> top == MAX -1;

      }

      void push(struct stack* stack, int value){
            if (isFull(stack)){
                  printf("stack overflow!\n");

            }
            else{
                  stack ->arr[++stack -> top] = value;
                  printf("%d pushed into stack. \n", value);
            }
      }

int pop(struct stack* stack){
      if(isEmpty(stack)){
            printf("stack underflow! \n");
            return -1;
      }
      else{
            return stack -> arr[stack -> top--];

      }
}
// Function to display the stack element
void display(struct stack* stack){
      if (isEmpty(stack)){
            printf("stack is empty\n");
      }
      else{
            printf("stack elements: ");
            for(int i=0; i<= stack->top; i++){
                  printf("%d \n", stack->arr[i]);
            }
            printf("\n");
      }
}
int main(){
      struct stack stack;
      initStack(&stack); 

      push(&stack, 10);
      push(&stack, 20);
      push(&stack, 30);
      push(&stack, 40);
      push(&stack, 50);

      display(&stack);
      
      return 0;

}
