# include<stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linkedTraversed(struct node*ptr){
    while (ptr!=NULL)
    {
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    

}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=2;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=5;
    third->next=NULL;
    linkedTraversed(head);
    
    return 0;
}