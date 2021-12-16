#include<stdio.h>
int cube(int a)
{
    return a * a * a;
}
int power(int number,int power)
{
    int re=1;
    for(int i=0;i<power;i++)
    {
        re=re*number;
    }
    return re;
}
void main()
{
    int result=cube(20);
    printf("cube is :%d\n",result);
    result=power(5,3);
    printf("power of 5 is :%d\n",result);
}