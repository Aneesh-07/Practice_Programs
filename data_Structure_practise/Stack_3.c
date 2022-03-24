#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int isEmpty(struct node *top)
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
        return 1;
    else
        return 0;
}
struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = x;
        p->next = top;
        top = p;
        return top;
    }
}
void traversal(struct node *p)
{
    while (p != NULL)
    {
        printf("Element : %d\n", p->data);
        p = p->next;
    }
}
int pop(struct node **top)
{
    if (isEmpty(*top))
        printf("Stack UnderFlow\n");
    else
    {
        struct node *p = *top;
       * top = (*top)->next;
        int x=p->data;
        free(p);
        return x;
    }
}
int peek(struct node* top,int pos){
    struct node* p=top;
    for(int i=0;(i<pos-1&&p!=NULL);i++) p=p->next;

    if(p!=NULL) return p->data;
    else return -1;
    
}
int stackTop(struct node* top){
    return top->data;
}
int stackBottom(struct node* top){
    while (top->next!=NULL)
    {
        top=top->next;
    }
    return top->data;
}
int main()
{
    struct node *top = NULL;
    top = push(top, 11);
    top = push(top, 22);
    top = push(top, 33);
    top = push(top, 44);
    top = push(top, 55);
    traversal(top);
    // printf("%d Popped\n",pop(&top));
//   printf("element:%d\n",peek(top,2));
    // traversal(top);
printf("stack top :%d\n",stackTop(top));
printf("stack bottom  :%d\n",stackBottom(top));

    return 0;
}