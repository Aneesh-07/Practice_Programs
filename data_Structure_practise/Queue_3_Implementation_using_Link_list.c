#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *f = NULL;
struct node *r = NULL;

void enque( int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
        printf("queue Full");
    else
    {

        n->data = val;
        n->next = NULL;
        if (r == NULL)
            f = r = n;
        else
        {
            r->next = n;
            r = n;
        }
        printf("Enqueued Element:%d\n", val);
    }
}
void traversal()
{
    struct node *t = f;
    while (t != r->next)
    {
        printf("Element:%d\n", t->data);
        t = t->next;
    }
}
void dequeue()
{
    if(f==NULL) printf("queue Empty");
    else
    {
        struct node * t=f;
        f=f->next;
        printf("Dequeuing Elemnt:%d\n",t->data);
        free(t);
    }
}
int main()
{
    enque(11);
    enque(22);
    enque(22);
    enque(33);
    enque(33);
    enque(33);
    enque(44);
    enque(44);
    enque(44);
    enque(55);
    traversal();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    traversal();
    return 0;
}