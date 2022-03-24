#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node *next;
};
struct node1{
    char data;
    struct node1* next;
};
void postfix(char *a)
{


}
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
void *push(struct node **top, char x)
{
    if (isFull(*top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = x;
        p->next = *top;
        *top = p;
        return *top;
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
char pop(struct node **top)
{
    if (isEmpty(*top))
        printf("Stack UnderFlow\n");
    else
    {
        struct node *p = *top;
       * top = (*top)->next;
        char x=p->data;
        free(p);
        return x;
    }
}
char stackTop(struct node* top){
    return top->data;
}
int precedence(char a){
    if(a=='*'||a=='/') return 3;
    else if(a=='+'||a=='-') return 2;
    return 0;
}
int isoperator(char a){
    if(a=='*'||a=='/'||a=='+'||a=="-") return 1;
    return 0
}


int main()
{
    struct node *top = NULL;
   
    return 0;
}