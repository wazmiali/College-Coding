// #include <stdio.h>
// #include <stdlib.h>
// #include<string.h>

// struct stack
// {
//       int size;
//       int top;
//       char *arr;
// };

// int stackTop(struct stack *sp)
// {
//       return sp->arr[sp->top];
// }

// int isEmpty(struct stack *ptr)
// {
//       return ptr->top == -1;
// }

// int isFull(struct stack *ptr)
// {
//       return ptr->top == ptr->size - 1;
// }

// void push(struct stack *ptr, char val)
// {
//       if (isFull(ptr))
//       {
//             printf("Stack overflow\n");
//       }
//       else
//       {
//             ptr->top++;
//             ptr->arr[ptr->top] = val;
//       }
// }

// char pop(struct stack *ptr)
// {
//       if (isEmpty(ptr))
//       {
//             printf("Stack Underflow! Cannot pop from the stack\n");
//             return 0;
//       }
//       else
//       {
//             char val = ptr->arr[ptr->top];
//             ptr->top--;
//             return val;
//       }
// }

// int precedence(char ch)
// {
//       if (ch == '*' || ch == '/')
//             return 3;
//       else if (ch == '+' || ch == '-')
//             return 2;
//       else
//             return 0;
// }
// int isOperator(char ch)
// {
//       if (ch == '+' || ch == '*' || ch == '/')
//             return 1;
//       else
//             return 0;
// }

// char *infixToPost(char *infix)
// {
//       struct stack *sp = (struct stack*) malloc(sizeof(struct stack));
//       sp->size = 100;
//       sp->top = -1;
//       sp->arr = (char *)malloc(sp->size * sizeof(char));
//       char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
//       int i = 0; // Track infix traversal
//       int j = 0; // Track postfix addition

//       while (infix[i] != '0')
//       {
//             if (!isOperator(infix[i]))
//             {
//                   postfix[j] = infix[i];
//                   j++;
//                   i++;
//             }

//             else
//             {
//                   if (precedence(infix[i]) > precedence(stackTop(sp)))
//                   {
//                         push(sp, infix[i]);
//                         i++;
//                   }
//                   else
//                   {
//                         postfix[j] = pop(sp);
//                         j++;
//                   }
//             }
//       }
//       while (!isEmpty(sp))
//       {
//             postfix[j] = pop(sp);
//             j++;
//       }
//       postfix[j] = '\0';
//       return postfix;
// }
// int main()
// {
//       char *infix = "a-b+t/6";
//       printf("postfix is %s", infixToPost(infix));

//       return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char *arr;
};

// Function to get the top element of the stack
int stackTop(struct stack *sp) {
    if (sp->top == -1) {
        return -1; // Return -1 if stack is empty
    }
    return sp->arr[sp->top];
}

// Function to check if the stack is empty
int isEmpty(struct stack *ptr) {
    return ptr->top == -1;
}

// Function to check if the stack is full
int isFull(struct stack *ptr) {
    return ptr->top == ptr->size - 1;
}

// Function to push an element onto the stack
void push(struct stack *ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack overflow\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// Function to pop an element from the stack
char pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return 0;
    } else {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// Function to determine the precedence of an operator
int precedence(char ch) {
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to convert infix expression to postfix expression
char *infixToPost(char *infix) {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0; // Track infix traversal
    int j = 0; // Track postfix addition

    while (infix[i] != '\0') { // Traverse the infix string
        if (!isOperator(infix[i])) { // If not an operator, add to postfix
            postfix[j] = infix[i];
            j++;
            i++;
        } else { // If operator, manage precedence
            while (!isEmpty(sp) && precedence(infix[i]) <= precedence(stackTop(sp))) {
                postfix[j] = pop(sp);
                j++;
            }
            push(sp, infix[i]);
            i++;
        }
    }
    // Pop remaining operators from stack
    while (!isEmpty(sp)) {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0'; // Null-terminate the postfix expression
    free(sp->arr); // Free allocated memory for stack array
    free(sp);      // Free stack structure
    return postfix;
}

int main() {
    char *infix = "x-y/z-k*d";
    char *postfix = infixToPost(infix);
    printf("Postfix is: %s\n", postfix);
    free(postfix); // Free the allocated memory for postfix
    return 0;
}

