#include<stdio.h>
float V_area(float b,float h)
{
    float area=(0.5)*b*h;
    return area;
}
float C_area(float *b,float *h)
{
    float area =(0.5)* *b * *h;
    return area;
}
int main()
{
    int n;
    float base,height,area;
    printf("Enter 1 to calculate area of triangle by call by value and Enter 2 for call by refrence : ");
    scanf("%d",&n);
    printf("Enter base and height of the triangle : ");
    scanf("%f %f",&base,&height);
    switch(n)
    {
        case 1 : 
        area=V_area(base,height);
        printf("Area of triangle = %f",area);
        break;
        case 2 :
        area = C_area(&base,&height);
        printf("Area of triangle = %f",area);
        break;
        default :
        printf("Invalid option");
        break;    
    }
    return 0;
}

