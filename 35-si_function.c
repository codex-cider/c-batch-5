#include<stdio.h>
void si();
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
void main()
{
  si();
}