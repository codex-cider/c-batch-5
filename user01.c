#include <stdio.h>
void logic();
void main()
{

    int intelligance, attitude;
    printf("enter the value of intelligance student perform in task-");
    scanf("%d", &intelligance);
    printf("enter the value of positive attitude student have in task-");
    scanf("%d", &attitude);

    logic(intelligance, attitude);
}

void logic(int a, int b)
{

    int sum;
    printf("sum of attitude and attitude is-%d", a + b);
}
