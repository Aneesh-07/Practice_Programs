#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void reverse(struct node *head)
{
    if (head != NULL)
    {
        reverse(head->next);
        printf("%d ",head->data);
    }
}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node)),*ptr;
    int n,a;
    scanf("%d %d",&n,&a);
    head->data=a;
    head->next=NULL;
    n--;
    ptr=head;   
    while (n--)
    {
        scanf("%d",&a);
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a;
        temp->next=NULL;
        ptr->next=temp;
        ptr=temp;
    }
    
reverse(head);
    return 0;
}