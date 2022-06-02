#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left,*right;
};

struct node* create()
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value of node(-1 for no node)\n");
    int x;  
    scanf("%d",&x);
    if(x==-1)   return NULL;
    newnode->data=x;
    printf("Enter Left child %d",x);
    newnode->left=create();
    printf("Enter Right child %d",x);
    newnode->right=create();
    return newnode;

}

int main()
{
    struct node* root;
    root = create();

    return 0;
}
