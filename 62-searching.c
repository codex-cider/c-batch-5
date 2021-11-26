#include<stdio.h>
void main()
{
    int i,b;
    int a[10];
     for(i = 0;i < 10; i++)
    {
        printf("Enter the value of a[%d]",i);
        scanf("%d", &a[i]);
    }
        printf("enter any no. for searching b = ");
        scanf("%d", &b);
    for(i=0;i<10;i++)
    {
        if(a[i] == b)
        {
            printf("value is found\n");
        }
    }
}
