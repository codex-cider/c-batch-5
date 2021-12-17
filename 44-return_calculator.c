#include<stdio.h>
int sum(int a,int b)
{        
    printf("enter the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);  
    return a+b;
}
int sub(int a,int b)
{
    printf("enter the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);  
    return a-b;
}
int mul(int a,int b)
{
    printf("enter the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);  
    return a*b;
}
int div(int a,int b)
{
    printf("enter the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);  
    return a/b;
}
void main()
{
    int option;
    printf("press one for sum\n");
    printf("press two for sub\n");
    printf("press three for mul\n");
    printf("press four for div\n");
    scanf("%d",&option);
    if(option==1)
    {
        int a,b;
        int addition=sum(a,b); 
        printf("addition is :%d\n",addition);
    }
     else if(option==2)
     {
        int a,b;
       int subtraction=sub(a,b);
       printf("subtraction is :%d\n",subtraction);
     }
     else if (option==3)
     {
        int a,b;
        int multiplication=mul(a,b);
        printf("multiplication is :%d\n",multiplication);
    }
    else if(option==4)
    {
        int a,b;
        int division =div(a,b);
        printf("division is :%d\n",division);
    }
    else
    {
        printf("wrong option\n");
    }

}
