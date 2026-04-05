#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
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
        printf("The Stack is Overflow..!\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int top(struct stack*ptr){
    return ptr->arr[ptr->top];
}
int bottom(struct stack*ptr){
    return ptr->arr[0];
}
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 4;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 2);
    push(s, 4);
    push(s, 6);
    push(s, 8);
    push(s, 10);
    printf("The Top Element of stack is %d\n",top(s));
    printf("The Bottom Element of stack is %d\n",bottom(s));
    return 0;
}