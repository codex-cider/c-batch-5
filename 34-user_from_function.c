#include<stdio.h>
void sum();
void main()
{
    int a,b,c;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);

    sum(a,b); //arguments
}

void sum(int x,int y)// perameter
{
    printf("sum is :%d",x+y);

}