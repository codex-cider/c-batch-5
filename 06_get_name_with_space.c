

#include <stdio.h>
void main()
{
    char name[10];
    printf("enter your name:");
    scanf("%[^\n]", &name);

    printf("\n\n");
    printf("your name is : %s", name);
}