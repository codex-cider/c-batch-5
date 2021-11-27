#include <stdio.h>
void main()
{
    int a = 0;
    while (a == 0) // conditional statement
    //the while loop is working again and again till the conditional statement become false
    {
        printf("enter the number-");
        scanf("%d", &a);
    }
}