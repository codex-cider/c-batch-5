#include<stdio.h>
void sum();
void sub();
void mul();
void div();
void main()
{
    int a,b;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    int option;
    printf("press 1 for sum\n");
    printf("press 2 for sub\n");
    printf("press 3 for mul\n");
    printf("press 4 for div\n");
    scanf("%d",&option);
     if(option==1)
     {
         sum(a,b);
     }
     else if (option==2)
     {
         sub(a,b);
     }
     else if (option==3)
     {
         mul(a,b);
     }
     else if (option==4)
     {
         div(a,b);
     }
     else
     {
         printf("wrong no.");
     }
}

void sum(int x,int y)// perameter
{
    printf("sum is :%d\n",x+y);

}
void sub(int x,int y)
{
    printf("sub is :%d\n",x-y);

}
void mul(int x,int y)
{
    printf("mul is :%d\n",x*y);

}
void div(int x,int y)
{
    printf("div is :%d\n",x/y);

}
