#include<stdio.h>

int main()
{
    int n;
 printf("Enter the upper limit to print prime no. from 1 to: ");//To take user input for upper limit
 scanf("%d",&n);
 printf("Prime numbers from 1 to %d are ",n);
 for (int i = 2; i < n; i++)
 {
     int count=0;
     for(int j=2;j<=(i/2);j++)//To segregate all the primes
     {
         if(i%j==0)
         count++;
     }
     if (count==0)
     {
        printf("%d,",i);//To print all the primes between the limt
     }
     
 }
    
}