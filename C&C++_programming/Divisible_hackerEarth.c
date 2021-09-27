#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int *a,n,x=0,y=0,z=0;
    scanf("%d",&n);
     
     a=(int*)malloc(n*sizeof(int));
   
     for(int i=0;i<n;i++)
     {
     scanf("%d",&*(a+i));
     printf("%d\n",*(a+i));
     }
     for(int i=0;i<n;i++)
     {
         if(i>=0&&i<n/2)
         {
             
             while(*(a+i)>9)
             *(a+i)=*(a+i)/10;
             if(i==(n/2)-1)
             x+=*(a+i);
             x+=*(a+i)*pow(10,();
             printf("%d\n",x);
         }
         if(i>=n/2&&i<n)
         {
             if(i==n-1)
             y+=*(a+i)%10;

             y+=(*(a+i)%10)*pow(10,((n-1)-i));
printf("%d\n",y);
         }
     }

     z=x*pow(10,(n/2))+y;
     printf("%d\n",z);
     
     
}