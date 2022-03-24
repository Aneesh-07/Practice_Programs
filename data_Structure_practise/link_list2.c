#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert_at_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct node *insert_at_index(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insert_at_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *insert_after_node(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 16;
    third->next = fourth;
    fourth->data = 17;
    fourth->next = NULL;
    printf("Linked List before insertion\n");
    traverse(head);
    // printf("\n");
    // head = insert_at_first(head, 66);
    // printf("Linked List after insertion at start\n");
    // traverse(head);
    // printf("\n");
    // head = insert_at_index(head, 43, 3);
    // printf("Linked List after insertion at between\n");
    // traverse(head);
    // printf("\n");
     head = insert_at_end(head, 29);
    printf("Linked List after insertion at end\n");
     traverse(head);
    // printf("\n");
    // head = insert_after_node(head, third, 999);
    // printf("Linked List after insertion at some node\n");
    // traverse(head);

    return 0;
}