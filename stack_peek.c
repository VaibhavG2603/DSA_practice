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
int peek(struct stack *ptr, int i)
{
    int arrayInd = ptr->top - i + 1;
    if (arrayInd < 0)
    {
        printf("The Invalid Position for stack..!\n");
    }
    else
    {
        return ptr->arr[arrayInd];
    }
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

    for (int i = 1; i <= s->top + 1; i++)
    {
        printf("the position is %d of Element %d\n",i, peek(s, i));
    }

    return 0;
}