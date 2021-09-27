#include<stdio.h>

int main()
{
    int t,n,x,y,cost1,cost2;

scanf("%d",&t);

while(t--)
{
    cost1=0,x=0,y=0,cost2=0;
    scanf("%d %d",&x,&y);
    scanf("%d",&n);
    int p[n][2];
    for(int i=0;i<n;i++)
    scanf("%d %d",&p[i][0],&p[i][1]);
    for(int i=0;i<n;i++){
        cost1+=p[i][0]*x;
        cost1+=p[i][1]*y;
        cost2+=p[i][1]*x;
        cost2+=p[i][0]*y;
    }
    if(cost1<cost2)
    printf("%d\n",cost1);
    else
        printf("%d\n",cost2);


}
}