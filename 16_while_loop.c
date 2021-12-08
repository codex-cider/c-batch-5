#include <stdio.h>
void main()
{
    int a[5];
    int i = 0;
    while (i <= 4)
    {
        printf("enter the element of array a[%d]-\n", i);
        scanf("%d", &a[i]);
        i++;
    }
    i = 0;
    while (i < 5)
    {
        printf("a[%d]=%d\n", i, a[i]);
        i++;
    }
}
