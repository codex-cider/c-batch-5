#include<stdio.h>
void sum();
void sub();
void mul();
void div();
void sum()
{
    printf("called SUM");
}
void sub()
{
    printf("called SUB");
}
void mul()
{
    printf("called MUL");
}
void div()
{
    printf("called DIV");
}
void main()
{
    int options;
    printf("press 1 for sum\n");
    printf("press 2 for sub\n");
    printf("press 3 for mul\n");
    printf("press 4 for div\n");
    scanf("%d",&options);
}


