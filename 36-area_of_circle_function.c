#include<stdio.h>
AreaOfCircle();
AreaOfCircle(int r)
{
    float pi=3.14;
    float area_of_circle=pi*r*r;
    printf("enter the area of circle :%.2f",area_of_circle);
}
void main()
{
    float r;
    printf("enter the radius :");
    scanf("%f",&r);
    AreaOfCircle(r);
}