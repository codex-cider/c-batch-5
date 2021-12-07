#include <stdio.h>
void sum();
void sub();
void mul();
void div();
void sum()
{
    int a,b,c;
    printf ("enter the no. :");
    scanf("%d",&a);
    printf("enter second no. :");
    scanf("%d",&b);
     c=a+b;
    printf("SUM :%d",c);
}
void sub()
{
    int a,b,c;
    printf ("enter the no. :");
    scanf("%d",&a);
    printf("enter second no. :");
    scanf("%d",&b);
     c=a-b;
    printf("SUB :%d",c);
}
void mul()
{
    int a,b,c;
    printf ("enter the no. :");
    scanf("%d",&a);
    printf("enter second no. :");
    scanf("%d",&b);
    c=a*b;
    printf("MUL :%d",c);
}
void div()
{
    int a,b,c;
    printf ("enter the no. :");
    scanf("%d",&a);
    printf("enter second no. :");
    scanf("%d",&b);
    c=a/b;
    printf("DIV :%d",c);
}
void start()
{
    int option;
    printf("press 1 for sum\n");
    printf("press 2 for sub\n");
    printf("press 3 for mul\n");
    printf("press 4 for div\n");
    scanf("%d",&option);
     if(option==1)
     {
         sum();
     }
     else if (option==2)
     {
         sub();
     }
     else if (option==3)
     {
         mul();
     }
     else if (option==4)
     {
         div();
     }
     else
     {
         printf("wrong no.");
     }
}
    int main() 
     {
         start();
     }

