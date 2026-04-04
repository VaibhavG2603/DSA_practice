#include<stdio.h>
# include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }

}
int full(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return  0;
    }
}
void push(struct stack* ptr,int val){
    if(full(ptr)){
        printf("The Stack is Overflow..!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack* ptr){
    if(isempty(ptr)){
        printf("The Stack is Underflow...!\n");
        
    }
    else{
       int val= ptr->arr[ptr->top];
       ptr->top--;
       return val;

    }
}
int main(){
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->size=4;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    printf("Before pushing:%d\n",isempty(s));
    printf("Before pushing:%d\n",full(s));
    push(s,2);
    push(s,4);
    push(s,6);
    push(s,8);
    push(s,10);
    printf("After pushing:%d\n",isempty(s));
    printf("After pushing:%d\n",full(s));
    
    printf("Before pushing %d is pop from stack\n",pop(s));
    printf("Before pushing %d is pop fram stack\n",pop(s));

    return 0;
}