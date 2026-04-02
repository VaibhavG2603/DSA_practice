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
 struct node*DeleteFirst(struct node*head){
    
     struct node*temp=head;
     head=head->next;
     free(temp);
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
    printf("Before Deletion\n");
    traverseLinked(head);
    printf("After Deletion\n");
    head=DeleteFirst(head);
    traverseLinked(head);
    
    return 0;
}