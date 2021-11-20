#include <stdio.h>

void main()
{
    char name[15][5];
    char temp;

    printf("Enter students name \n");

    printf("1 --> Name ");
    // fgets(name[0], 15, stdin);
    scanf("%[^\n]s", &name[0]);

    scanf("%c", &temp);

    printf("2 --> Name ");
    // fgets(name[1], 15, stdin);
    scanf("%[^\n]s", &name[1]);

    printf("\n\n");
    printf("1 --> name is : %s\n", name[0]);
    printf("2 --> name is : %s\n", name[1]);
}