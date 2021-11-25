#include <stdio.h>
void main()
{

    int a[10];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("you entered the value of a[%d]:", i);
        scanf("%d", &a[i]);
    }
}