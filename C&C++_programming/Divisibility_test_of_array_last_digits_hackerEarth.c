
#include <stdio.h>

int main(){
	int n = 0,a=0;
	scanf("%d", &n);
	
	long data[n];
	for(int i=0; i<n; i++)
	    scanf("%ld", &data[i]);
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		a+=(data[i]%10);
		else
		a+=(data[i]%10)*10;
	}

	if(a%10==0)
	printf("Yes");

	else
	printf("No");
    
    return 0;
}