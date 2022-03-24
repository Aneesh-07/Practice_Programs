#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *head)
{
    while (head != NULL)
    {
        printf("Element=%d\n", head->data);
        head = head->next;
    }
    printf("\n");
}

struct node *deletion_at_first(struct node *head)
{
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}
struct node *deletion_at_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int j = 0;
    while (j != index - 1)
    {
        p = p->next;
        q = q->next;
        j++;
    }

    p->next = q->next;
    free(q);
    return (head);
}
struct node *deletion_at_last(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct node* deletion_at_element(struct node* head){
    int temp;
    scanf("%d",&temp);
    struct node* p=head;
    struct node* q=head->next;
    while(q->data!=temp&&q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==temp){
        p->next=q->next;
        free(q);
    }
        
return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 33;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = NULL;
    traverse(head);
    // head = deletion_at_first(head);
    // traverse(head);

    // head = deletion_at_index(head, 2);
    // traverse(head);
    // head = deletion_at_last(head);
    // traverse(head);
    head=deletion_at_element(head);
    traverse(head);
    return 0;
}