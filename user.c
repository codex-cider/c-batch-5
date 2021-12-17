//user sai laina hai aur ek function ko daina hai aur vo function kai abdar value print krvani hai

#include <stdio.h>
void logic();

void logic(int a, int b)
{

    printf("intelligance=%d\n", a);
    printf("attitude=%d\n", b);
}

void main(int a, int b)
{

    int intelligance, attitude;
    printf("enter the value of intelligance student perform in task-");
    scanf("%d", &intelligance);
    printf("enter the value of positive attitude student have in task-");
    scanf("%d", &attitude);

    logic(intelligance, attitude);
}