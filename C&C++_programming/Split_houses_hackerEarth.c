#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    char h[n];
    scanf("%s",&h);

    for(int i=0;i<n;i++)
    {
        if(h[i]=='H'&&h[i+1]=='H')
        {
            printf("NO");
            return 0;
        
        }
        else if(h[i]=='.')
        {
          h[i]='B';
        }
    }
    printf("Yes\n%s",h);
}