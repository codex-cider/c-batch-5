#include<stdio.h>
void main()
{
    char ch[5] = {'a','e','i','o','u'};
    for ( char i = 0; i < 5; i++)
    {
        printf("ch[%d] = %c", i, ch[i]);
        printf("\n");
        printf("&ch[%d] = %d", i, &ch[i]);
        printf("\n");
        printf("\n");

    }
}
