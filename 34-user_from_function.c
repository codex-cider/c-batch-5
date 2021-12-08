#include<stdio.h>
void sum();
void main()
{
    int a,b,c;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    c=a+b;
    sum(a,b,c); //arguments
}

void sum(int x,int y,int z)// perameter
{
    printf("sum is :%d",z);

}