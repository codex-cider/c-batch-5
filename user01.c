#include <stdio.h>
int logic();
void main()
{

    int intelligance, attitude;
    printf("enter the value of intelligance student perform in task-");
    scanf("%d", &intelligance);
    printf("enter the value of positive attitude student have in task-");
    scanf("%d", &attitude);

    logic(intelligance, attitude);
}

int logic(int a, int b)
{

    return a + b;
}
