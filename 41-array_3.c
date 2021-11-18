#include <stdio.h>
void main()
{
    // printf("The value of a[0] is:\n");
    // scanf("%d", &a[0]);
    // printf("The value of a[1] is:\n");
    // scanf("%d", &a[1]);
    // printf("The value of a[2] is:\n");
    // scanf("%d", &a[2]);
    // printf("The value of a[3] is:\n");
    // scanf("%d", &a[3]);
    // printf("The value of a[4] is:\n");
    // scanf("%d", &a[4]);

    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("you entered the value of a[%d]:", i);
        scanf("%d", &a[i]);
    }

    // printf("a[0]=%d\n", a[0]);
    // printf("a[1]=%d\n", a[1]);
    // printf("a[2]=%d\n", a[2]);
    // printf("a[3]=%d\n", a[3]);
    // printf("a[4]=%d\n", a[4]);

    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}