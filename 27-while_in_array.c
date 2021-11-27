#include<stdio.h>
void main()
{
    int a[5];
    int i;
    while(i<5)
    {
    printf("you entered the value of a[%d] :", i );
    scanf("%d",&a[i]);
    i++;
    }
}