#include<stdio.h>

int main()
{
    int i;
    char a[100];
    printf("Enter your string\n");
    gets(a);                        //Input of String
    for(i=0;i<100;i++)              // To count no. of charcters
    {
        if(a[i]=='\0')
        break;
    }
    printf("The length of your string is %d",i);   //Printing no. of characters
}