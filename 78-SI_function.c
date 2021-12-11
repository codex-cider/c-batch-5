#include<stdio.h>
void si();
void si(int p,int r,int t)
{
    float si=(p * r * t) / 100;

    printf("simple intrest :%.2f",si);
}
void main()
{
  float p, r, t;
   printf("enter the principal : ");
   scanf("%f", &p);
   printf("enter the rate : ");
   scanf("%f", &r);
   printf("enter the time : ");
   scanf("%f", &t);
   si(p, r, t);
}
