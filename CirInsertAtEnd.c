# include<stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void Traversal(struct node*head){
    struct node*p=head;
    do
    {
        printf("Element:%d\n",p->data);
        p=p->next;
    } while (p!=head);
    
}
struct node*InsertAtEnd(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    struct node*p=head->next;
    while(p->next!=head){
           p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}
int main(){
   
    struct node* head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=3;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data=9;
    fourth->next=head;
    printf("Before Insertion\n");
    Traversal(head);
    printf("After Insertion\n");
    head=InsertAtEnd(head,1);
    Traversal(head);

    return 0;

}