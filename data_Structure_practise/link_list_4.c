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
        printf("Element : %d\n", head->data);
        head = head->next;
    }
}
   void reverse(struct node* *head)
    {
        struct node *cur = *head;
        struct node *prev = NULL;
        struct node *nex =NULL;

        while(cur!=NULL){
        
           nex =cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
            
           * head=prev;
    }

    int main()
    {
        struct node *head = (struct node *)malloc(sizeof(struct node));
        struct node *second = (struct node *)malloc(sizeof(struct node));
        struct node *third = (struct node *)malloc(sizeof(struct node));
        struct node *fourth = (struct node *)malloc(sizeof(struct node));

        head->data = 1;
        head->next = second;

        second->data = 2;
        second->next = third;

        third->data = 3;
        third->next = fourth;

        fourth->data = 4;
        fourth->next = NULL;

        traverse(head);
        printf("\n");
        reverse(&head);
        traverse(head);


        return 0;
    }