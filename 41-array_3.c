#include<stdio.h>
void main()
{
    int a[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("You enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}
/*#include <stdio.h>
void main()
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("you entered the value of a[%d]:", i);
        scanf("%d", &a[i]);
    }


    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}
*/

