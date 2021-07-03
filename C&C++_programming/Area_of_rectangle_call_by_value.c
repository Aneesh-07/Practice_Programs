#include<stdio.h>
float R_area(float l,float b)
{
    float a=l*b;
    return a;
}
int main()
{
    float length,breadth,area;
    printf("Enter length and breadth of rectangle :");
    scanf("%f %f",&length,&breadth);
    area=R_area(length,breadth);
    printf("Area = %f",area);


}