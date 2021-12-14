#include<stdio.h>
void si();
void AreaOfCircle();
void si()
{
    float p,r,t;
   printf("enter the principal :");
   scanf("%f",&p);
   printf("enter the rate :");
   scanf("%f",&r);
   printf("enter the time :");
   scanf("%f",&t);
  float si=(p*r*t)/100;
   printf("simple intrest :%.2f",si);
}
void AreaOfCircle()
{
    float r;
    printf("enter the radius :");
    scanf("%f",&r);
    float pi=3.14;
    float area_of_circle=pi*r*r;
    printf("enter the area of circle :%.2f",area_of_circle);
}
void main()
{
    int option;
    printf("press 1 for simple intrest\n");
    printf("press 2 for area of circle\n");
    scanf("%d",&option);
    if(option==1)
    {
       si();
    }
    else if (option==2)
    {
       AreaOfCircle();
    }
    else{
        printf("this is invalid");
    }
}