#include <stdio.h>
void Cswap(int *a, int *b, int *c)
{
    int temp=
     // swapping in cyclic order
    temp = *a;
    *a = *c;
    *c = *b;
    *b =temp;
}

int main() 
{
    int x, y, z;
    printf("Enter x, y and z respectively: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Value before swapping:\n");
    printf("x = %d \ny = %d \nz = %d\n", x, y, z);
    Cswap(&x, &y, &z);
    printf("Value after swapping:\n");
    printf("x = %d \ny = %d \nz = %d", x, y, z);
}