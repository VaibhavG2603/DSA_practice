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
  int peek(struct node*top,int p){
    struct node* ptr=top;
    for (int i = 0; (i <p-1 && ptr!=NULL) ; i++)
    {
        ptr=ptr->next;
    }
    if (ptr!=NULL)
    {
        return ptr->data;
    }
    else{
        return -1;
    }
    
  }

int main(){
    struct node*top=NULL;
    top=push(top,7);
    top=push(top,15);
    top=push(top,18);
    top=push(top,28);
    traverse(top);
    for (int i = 1; i <=4; i++)
    {
      printf("The position at %d of Element is: %d\n",i,peek(top,i));
    }
    return 0;
      
}