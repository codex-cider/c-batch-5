#include<stdio.h>
void areaofcircle();
void areaofcircle()
{
    float r;
    float pi = 3.14;
    printf("Enter here radius : ");
    scanf("%f",&r);
    float areaofcircle = pi*r*r;
    printf("area of circle : %.2f",areaofcircle);
} 
void main()
{
    areaofcircle();
}
