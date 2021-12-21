#include <stdio.h>

void main()
{
    int a[10];
    int number;
    int find = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter any number for find ");
    scanf("%d", &number);

    for (int i = 0; i < 10; i++)
    {
        if (number == a[i])
        {
            find = 1;
        }
    }

    if (find == 1)
    {
        printf("Number is found");
    }
    else
    {
        printf("Number is not found");
    }
}