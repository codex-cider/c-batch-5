#include<stdio.h>
void student(int a, int b)
{
    printf("sum is : %d",a + b);
}
void main()
{
    int a,b;
    printf("Enter any number : ");
    scanf("%d", &a);
    printf("Enter any number : ");
    scanf("%d",&b);
    printf("a is : %d\n b is : %d\n",a,b);
    student(a,b);
}
