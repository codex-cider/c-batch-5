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
    printf("intelligance=%d\n", a);
    printf("attitude=%d\n", b);

    int sum = a + b;
    printf("sum of overall status is:%d", sum);
}
