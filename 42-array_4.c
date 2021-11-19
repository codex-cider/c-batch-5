#include<stdio.h>
void main()
{
    int i;
    int C;
    printf("The size of array : ");
    scanf("%d",&C);
    int a[C];


    for(i = 0; i < C; i++)
    {
        printf("You enter the value of a[%d] : ",i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < C; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}
