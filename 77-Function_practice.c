#include<stdio.h>
void student(int a, int b)
{
    printf("Enter any number : ");
    scanf("%d", &a);
    printf("Enter any number : ");
    scanf("%d",&b);

    printf("hiii \n%d %d\nsum is : %d",a,b,a + b);
}
void main()
{
    student(20, 30);
}
