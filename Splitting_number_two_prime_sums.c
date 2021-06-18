#include<stdio.h>
int primes(int a)
{
{
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
			return 0;
	}
}
	return 1;
}

int main()
{
	int n;
	printf("Enter no.\n");
	scanf("%d",&n);
	int a=2,b=n-2;
	for(int i=0;i<n/2;i++)
	{

		if(primes(a)&&primes(b))
		{
			printf("yes it can be broken into prime ex %d + %d = %d\n",a,b,n);
			return 0;
		}
		a++;
		b--;
	}

}