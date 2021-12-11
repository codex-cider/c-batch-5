#include<stdio.h>
void student();
void student(int a,int b)
{
    printf("sum is :%d\n",a+b);
}
void main()
{
    int a,b;
    printf("enter the a :");
    scanf ("%d",&a);
    printf("enter the b :");
    scanf ("%d",&b);
    printf("a is:%d\nb is :%d\n",a,b);
    student(a,b);
}