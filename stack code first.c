#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int empty(struct stack *ptr)
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

int full(struct stack *ptr)
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

void push(struct stack *ptr, int val)
{
    if (full(ptr))
    {
        printf("stack overflow!\ncannot push %d into the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("sucessfully pushed %d into the stack\n", val);
    }
}

int pop(struct stack *ptr)
{
    if (empty(ptr))
    {
        printf("stack underflow!\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("popped %d from the stack\n", val);
        return val;
    }
}
int peek(struct stack *sp, int i)
{
    int j = sp->top - i;
    if (sp->top - i < 0)
    {
        printf("invalid element num\n");
        return -1;
    }
    else
    {
        return sp->arr[sp->top - i];
    }
}

int main(void)
{
    char x,ans;
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    printf("please input the size of the stack\n");
    scanf("%d", &sp->size);
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    push(sp, 10);
    push(sp, 95);
    push(sp, 27);
    push(sp, 45);
    push(sp, 100);
    pop(sp);
    printf("do you want to see the stack after these changes?\n y or n\n");
    scanf("%s", &ans);
    if (ans == 'y')
    {
       for (int k = 0; k <= sp->top; k++)
       {
            printf("the element at %d position of this stack is %d\n", k + 1, peek(sp, k));
       }
    }
    else 
    {
        printf("goodbye\n");
    }
}

