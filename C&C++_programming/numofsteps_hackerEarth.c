#include<stdio.h>



int main()
{
	int n,min=5000;
	scanf("%d",&n);
	int a[n],b[n],steps=0,f=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min)
		min=a[i];
	}
	for(int j=0;j<n;j++)
	scanf("%d",&b[j]);

	for(int i=0;i<n;i++)
	{
		while(a[i]>min&&b[i]!=0)
		{
		a[i]-=b[i];
		steps++;
		}
		if(a[i]<min)
		{
			min=a[i];
			i=-1;
		}
        if(a[i]<0)
		{
			f=-1;
			break;
		}
	}
	if(f==-1)
	printf("-1");

	else
	printf("%d",steps);
}