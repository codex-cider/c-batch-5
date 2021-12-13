#include<stdio.h>
areaofcircle();
areaofcircle(int r)
{
    float pi = 3.14;
    float areaofcircle = pi*r*r;
    printf("area of circle : %.2f",areaofcircle);
} 
void main()
{
    float r;
    printf("Enter her radius : ");
    scanf("%f",&r);
    areaofcircle(r);
}
