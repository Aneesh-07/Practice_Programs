#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int peek(struct stack *p,int i)
{
    if((p->top-i+1)<0){
        printf("Invalid Position\n");
        return -1;
    }
    else return p->arr[p->top-i+1];
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == (ptr->size - 1))
        return 1;
    return 0;
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
        printf("Stack Overflow Cannot push %d into stack\n", val);
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}   
void pop(struct stack *ptr)
{
    if (isEmpty(ptr))
        printf("Stack Underflow Cannot pop from stack\n");
    else
    {
        int data;
        data = ptr->arr[ptr->top];
        ptr->top--;
    }
}
void traverse(struct stack *ptr)
{
    for(int i=0;i<=ptr->top;i++)
        printf("%d\n",ptr->arr[i]);
    
}

int stackTop(struct stack *p){
    return p->arr[p->top];
}

int stackBottom(struct stack *p){
    return p->arr[0];
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    // printf("%d\n", isFull(s));
    // printf("%d\n", isEmpty(s));
// printf("\n");
    push(s, 110);
    push(s, 99);
    push(s, 88);
    push(s, 77);
    push(s, 66);
    push(s, 55);
    push(s, 44);
    push(s, 33);
    push(s, 22);
    push(s, 11);
    // pop(s);

//     traverse(s);
// printf("\n");

//     printf("%d\n", isFull(s));
//     printf("%d\n", isEmpty(s));

printf("%d",peek(s,3));
    return 0;
}