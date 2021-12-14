#include<stdio.h>
void si();
void areaOfcircle();
void si()
{
    float p, r, t;
    printf("enter the principal : ");
    scanf("%f", &p);
    printf("enter the rate : ");
    scanf("%f", &r);
    printf("enter the time : ");
    scanf("%f", &t);
    float si=(p * r * t) / 100;
    printf("simple intrest :%.2f",si);
}
void areaofcircle()
{
    float r;
    float pi = 3.14;
    printf("Enter here radius : ");
    scanf("%f",&r);
    float areaofcircle = pi*r*r;
    printf("area of circle : %.2f",areaofcircle);
} 
void start()
{
    int option;
    printf("Enter one for simple intrest : \n");
    printf("Enter two for area of circle : \n");
    scanf("%d",&option);
    if (option == 1)
    {
        si();
    }
    
     else if(option == 2)
    {
        areaOfcircle();
    }
    else
    {
        printf("This is invalid");
    }
}
