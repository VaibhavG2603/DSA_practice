# include<stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void traverse(struct node*top){
    while (top!=NULL)
    {
        printf("Element: %d\n",top->data);
        top=top->next;
    }
    
}
int empty(struct node*top){
    if (top==NULL)
    {
        return 1;
    }
    else{return 0;
    }
    
}
int full(struct node*top){
    struct node*tp=(struct node*)malloc(sizeof(struct node));
    if (tp==NULL)
    {
        return 1;
    }
   else{return 0;
    }
}
struct node *push(struct node*top,int x){
    if(full(top)){
        printf("Stack is Overflow..!\n");
    }
    else{
        struct node*n=(struct node*)malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;

    }
}
struct node *pop(struct node**top){
    if(empty(*top)){
        printf("Stack is underflow..!\n");
    }
    else{
        struct node*n=*top;
        *top=(*top)->next;
        int x=n->data;
        free(n);
        return x;

    }
}
int main(){
    struct node*top=NULL;
    top=push(top,2);
    top=push(top,4);
    top=push(top,6);
    traverse(top);
    int element =pop(&top);
    printf("Popped Element is:%d\n",element);
    traverse(top);
    return 0;
}