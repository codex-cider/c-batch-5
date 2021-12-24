#include<stdio.h>
void main()
{
    int i;
    int B;
    printf("The size of array : ");
    scanf("%d",&B);
    int a[B];

    for(i = 0; i < B; i++)
    {
        printf("You enter the value of a[%d] : ",i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < B; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}
