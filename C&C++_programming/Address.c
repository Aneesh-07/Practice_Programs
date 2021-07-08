#include<stdio.h>
void add(int *a,int *b)
{
    int sum;
    sum= *a+*b;
    printf("Sum of the no is %d\n",sum);
}
void swap(int *a,int *b)
{
    int temp;
    temp =*a,*a=*b,*b=temp;
}
int main()
{
    int a,b;
    printf("Enter number 1 and 2\n");
    scanf("%d %d",&a,&b);
    printf("The numbers are a=%d  b=%d\n",a,b);
    add(&a,&b);
    swap(&a,&b);
printf("The numbers after swapping are a=%d  b=%d\n",a,b);
}