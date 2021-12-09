#include <stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
#include "div.c"

void main()
{

    int option;
    printf("press 1 for sum\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d", &option);
    int a, b;

    if (option == 1)
    {
        add(a, b);
    }
    else if (option == 2)
    {
        sub(a, b);
    }
    else if (option == 3)
    {
        mul(a, b);
    }
    else if (option == 4)
    {
        div(a, b);
    }
    else
    {
        printf("nothing");
    }
}
