#include<stdio.h>
void areaofcircle(int);
void areaofcircle(int r)
{
    float pi = 3.14;
    printf("Enter her radius : ");
    scanf("%d",&r);
    float areaofcircle = pi*r*r;
    printf("area of circle : %.2f",areaofcircle);
} 
void main()
{
    float r;
    areaofcircle(r);
}