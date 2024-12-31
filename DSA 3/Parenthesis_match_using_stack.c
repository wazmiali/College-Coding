#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    return ptr->top == -1;
}

int isFull(struct stack *ptr)
{
    return ptr->top == ptr->size - 1;
}

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return 0;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char *exp)
{
    // Initialize stack
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    // Traverse the expression
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                free(sp->arr);
                free(sp);
                return 0; // Mismatched closing parenthesis
            }
            pop(sp);
        }
    }

    // Check if stack is empty
    int result = isEmpty(sp);
    free(sp->arr);
    free(sp);
    return result;
}

int main()
{
    char *exp = "8)*(9))";
    // Check if the parentheses are balanced
    if (parenthesisMatch(exp))
    {
        printf("The parentheses are matching\n");
    }
    else
    {
        printf("The parentheses are not matching\n");
    }
    return 0;
}
