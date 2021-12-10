#include<stdio.h>
void si();
void main()
{
  int p,r,t;
   printf("enter the principal :");
   scanf("%d",&p);
   printf("enter the rate :");
   scanf("%d",&r);
   printf("enter the time :");
   scanf("%d",&t);
  int si=(p*r*t)/100;
}
void si(int x,int y,int z)
{
  
   printf("simple intrest :%d",si);

}