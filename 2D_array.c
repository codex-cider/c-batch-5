#include <stdio.h>
void main()
{
    char name[15][5];
    char temp;
    printf("1--> Name");
    fgets(name[0], 15, stdin);

    printf("2--> Name");
    fgets(name[1], 15, stdin);

    printf("\n\n");
    printf("1--> name is :%s\n", name[0]);
    printf("2--> name is :%s\n", name[1]);
}