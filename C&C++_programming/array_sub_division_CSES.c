#include<stdio.h>

int main()
{
    int n,x,c=0;
    scanf("%d %d",&n,&x);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==x)
            {
                c++;
                break;
            }
        
        }
    }
    printf("%d",c);
}