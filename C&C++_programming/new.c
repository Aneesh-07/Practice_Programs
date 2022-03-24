#include <stdio.h>
#include <stdlib.h>
int dispalay(int a){
    while(dksjf)
    return 0;
}
struct node{
    int data;
    struct node* next;
};
struct node* search(struct node* start,int key,int value){
    struct node* p=start;
    struct node* q=start->next;
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
     
    while(q->data!=key&&q!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==key){
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=value;
    }
    else{
        printf("Node not found!\n");
    }
    
    return start;
    
}
void display(struct node* head){
    printf("Linked List:");
    while(head!=NULL){
        printf("->%d",head->data);
        head=head->next;
    }
}
int main()
{
    int a[1000000000000];
    int n,a,key,value;
    scanf("%d %d",&n,&a);
    struct node *head=(struct node*)malloc(sizeof(struct node)),*ptr;
    head->data=a;
    head->next=NULL;
    n--;
    ptr=head;
    while(n--){
        scanf("%d",&a);
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a;
        temp->next=NULL;    
        ptr->next=temp;
        ptr=temp;
    }   
    scanf("%d %d",&key,&value);
    
    head=search(head,key,value);
    
    
	return 0;
}