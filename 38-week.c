#include<stdio.h>
void main()
{
    int week;
    printf("Enter any number for week : ");
    scanf("%d", &week);

    if (week == 1)
    {
        printf("MONDAY");
    } 

    else if (week == 2)
    {
        printf("TUESDAY");
    } 

    else if (week == 3)
    {
        printf("WEDNESAY");
    }

    else if (week == 4)
    {
        printf("THURSDAY");
    } 

    else if (week == 5)
    {
        printf("FRIDAY");
    }

    else if (week == 6)
    {
        printf("SATURDAY");
    }

    else if (week == 7)
    {
        printf("SUNDAY");
    }
    else
    {
        printf("This is default");
    }
 }