#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
};
struct node *top = NULL;
void push(char s)
{
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=s;
    p->next=top;
    top=p;
}
void pop()
{
    struct node* p=top;
    top=top->next;
    free(p);
}
void peek(int pos){
struct node* p=top;
for(int i=0;i<pos-1;i++) p=p->next;
printf("%c\n",p->data);
}
int main()
{
    int n, i;
    printf("Enter size of string");
    scanf("%d", &n);
    char a;
    // char *a = (char *)malloc(100 * sizeof(char));
    for (i = 0; i < n; i++){
        scanf("%c",&a);
       push(a);    
    }
for(int i=0;i<n;i++) peek(i);
    return 0;
}