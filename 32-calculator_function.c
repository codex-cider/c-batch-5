#include <stdio.h>
void sum();
void sub();
void mul();
void div();
void sum()
{
    printf("called SUM");
}
void sub()
{
    printf("called SUB :");
}
void mul()
{
    printf("called MUL :");
}
void div()
{
    printf("called DIV :");
}
void main()
{
    int a, b;
    printf ("enter the no. :");
    scanf("%d",&a);
   
     if(1==a+b)
     {
         sum();
     }
     else if (2==a-b)
     {
         sub();
     }
     else if (3==a*b)
     {
         mul();
     }
     else if (4==a/b)
     {
         div();
     }
     else
     {
         printf("wrong no.");
     }
}

