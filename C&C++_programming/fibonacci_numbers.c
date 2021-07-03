#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of terms for Fibonacci series  "); //To take user input on number of terms of series
    scanf("%d",&n);
    int Fib[n];//Intialising array to store value for series
    Fib[0]=0;//Some preset value which do not follow the pattern
    Fib[1]=1;
    for(i=2;i<n;i++)
    {
        Fib[i]=Fib[i-1]+Fib[i-2];//Formula for the pattern of the series
    }
for ( i = 0; i < n; i++)
{
    printf("%d\t",Fib[i]);//Printing the series
}


}