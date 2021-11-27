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

    printf("a[0]=%d\n", a[0]);
    printf("a[1]=%d\n", a[1]);
    printf("a[2]=%d\n", a[2]);
    printf("a[3]=%d\n", a[3]);
    printf("a[4]=%d\n", a[4]);
}
