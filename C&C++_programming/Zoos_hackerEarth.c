#include<stdio.h>

int main()
{
    int x=0,y=0;
    char a[20];

    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='z'||a[i]=='Z')
        x++;
        else if(a[i]=='o'||a[i]=='O')
        y++;
    }
    if(2*x==y)
    printf("Yes");

    else
    printf("No");
}