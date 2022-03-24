#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queue *q)
{
    if ((q->r + 1) % q->size == q->f)
        return 1;

    return 0;
}
int isEmpty(struct queue *q)
{
    if (q->f == q->r)
        return 1;

    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isFull(q))
        printf("Queue Full\n");
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqued element %d\n", val);
    }
}
void dequeue(struct queue *q)
{
    // int a=-1;
    if (isEmpty(q))
        printf("Queue Empty\n");
    else
    {
        q->f = (q->f + 1) % q->size;
        // a=q->arr[q->f];
    }
    // return a;
}
// void traversal(struct queue *q)
// {
//     for (int i = q->f + 2; i <= q->r; i++)
//         printf("Element : %d\n", q->arr[i]);
// }
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 5;
    q->f = 0;
    q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));
    enqueue(q,11);
    enqueue(q,22);
    enqueue(q,33);
    enqueue(q,33);
    enqueue(q,44);
    enqueue(q,44);
//    traversal(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    enqueue(q,33);
    enqueue(q,33);
    enqueue(q,33);
    // enqueue(q,44);/
    dequeue(q);



//    traversal(q);
 if(isEmpty(q)){
        printf("this Queue is empty\n");
    }
    if(isFull(q)){
        printf("this Queue is full\n");
    }
    return 0;
}