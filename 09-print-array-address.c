#include <stdio.h>

void main()
{
    int a[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d", i, a[i]);
        printf("\n");
        printf("&a[%d] = %d", i, &a[i]);
        printf("\n");
        printf("\n");
    }

    printf("/**********************************/\n");
    printf("\n\n");
    char ch[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++)
    {
        printf("ch[%d] = %c", i, ch[i]);
        printf("\n");
        printf("&ch[%d] = %d", i, &ch[i]);
        printf("\n");
        printf("\n");
    }
}