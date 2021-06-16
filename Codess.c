#include<stdio.h>
void search(int n,int x[])
{
	for(int i=0;i<10;i++)
	{
		if(n==x[i])
		{
			printf("Successfull attemp ");
			return ;
		}

	}
	printf("unsuccessfull attempt");
}
int main()
{
	int x[10],n; 
	printf("Enter array\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter the element to find\n");
	scanf("%d",&n);
	search(n,x);
} 