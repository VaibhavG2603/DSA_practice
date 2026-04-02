#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverseLinked(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}
 struct node*InsertAtEnd(struct node*head,struct node*p,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

 }
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    int data = 1;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 3;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 7;
    third->next = NULL;
    printf("Before Insertion\n");
    traverseLinked(head);
    printf("After Insertion\n");
    head=InsertAtEnd(head,second,data);
    traverseLinked(head);
    
    return 0;
}