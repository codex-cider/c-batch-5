#include<stdio.h>
void main()
{
    int num = 10;
    int function(int);
    num = function(num);
}
int function(int num)
{
    printf("Number = %d",num);
    return num;
}
