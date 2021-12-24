#include<stdio.h>
void main()
{
    int yearofjoining,currerntYear,jobYear;
    printf("year of joining : ");
    scanf("%d",&yearofjoining);

    printf(" currerntYear: ");
    scanf("%d",&currerntYear);

    jobYear = yearofjoining - currerntYear;

    if(jobYear>5 && jobYear<10)
    {
        printf("5000 bonus");
    }
    else if(jobYear<10)
    {
        printf("10000 bonus");
    }
    else;{
        printf("2000 bonus");
    }
}