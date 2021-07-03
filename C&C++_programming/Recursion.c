#include <stdio.h>

int fact(int n);

int main()
{

int number, result;

printf("Enter a positive integer: "); 
scanf("%d", &number);

result = fact(number); printf("Factorial= %d", result);

return 0;
}

int fact(int n)

{

if (n != 1) // sum() function calls itself

return n*fact(n-1);

else

return n;
}