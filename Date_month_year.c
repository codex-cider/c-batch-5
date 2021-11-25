#include<stdio.h>
void main()
{
    int date,month,year;
    printf("Enter her date : ");
    scanf("%d",&date);

    printf("Enter her month : ");
    scanf("%d", &month);

    printf("Enter her year : ");
    scanf("%d",&year);

    printf(" %d\n",date);
    if ( month==1 )
    {
        printf("JANUARY\n");
    }
    else if( month==2 )
    {
        printf("FABRUARY\n");
    }
    else if( month==3 )
    {
        printf("MARCH\n");
    }
    else if( month==4 )
    {
        printf("APRIL\n");
    }
    else if( month==5 )
    {
        printf("MAY\n");
    }
    else if( month==6 )
    {
        printf("JUNE\n");
    }
    else if( month==7 )
    {
        printf("JULY\n");
    }
    else if( month==8 )
    {
        printf("AUGUST\n");
    }
    else if( month==9 )
    {
        printf("SEPTEMBER\n");
    }
    else if( month==10 )
    {
        printf("OCTOMBER\n");
    }
    else if( month==11 )
    {
        printf("NOVEMBER\n");
    }
    else if( month==12 )
    {
        printf("DECEMBER\n");
    }
    printf("%d",year);

}
