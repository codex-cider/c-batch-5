#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
void main()
{
    int option;
    printf("press one for sum");
    printf("press two for sub");
    printf("press three for mul");
    printf("press four for div");
    scanf("%d",&option);
    if(option==1)
    {
        int addition=sum();
        scanf("%d",&b);        
        printf("enter the number a :");
        scanf("%d",&a);
        printf("enter the number b :");

        printf("addition is :%d\n",addition);
    }
     if(option==2)
     {
       int subtraction=sub(20,10);
       printf("subtraction is :%d\n",subtraction);
     }
     if (option==3)
     {
        int multiplication=mul(5,5);
        printf("multiplication is :%d",multiplication);
    }
    if(option==4)
    {
        int division =div(8,2);
        printf("division is :%d\n",division);
    }

}
