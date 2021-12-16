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
    int addition=sum(20,10);
    printf("addition is :%d\n",addition);
    int subtraction=sub(20,10);
    printf("subtraction is :%d\n",subtraction);
    int multiplication=mul(5,5);
    printf("multiplication is :%d\n",multiplication);
    int division =div(8,2);
    printf("division is :%d\n",division);

}
