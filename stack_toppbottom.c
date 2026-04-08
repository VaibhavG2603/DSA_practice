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
 int stacktop(struct node*top){
       return top->data;
 }
 int stackbottom(struct node*top){
       struct node*ptr=top;
       while (ptr->next!=NULL)
       {
          ptr=ptr->next;
       }
       return ptr->data;
 }
int main(){
    struct node*top=NULL;
    top=push(top,7);
    top=push(top,15);
    top=push(top,18);
    top=push(top,28);
    traverse(top);
    int element=stacktop(top);
    printf("Top value is:%d\n",element);
    int element2=stackbottom(top);
    printf("Bottom value is:%d",element2);
    return 0;
      
}