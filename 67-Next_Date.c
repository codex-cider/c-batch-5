#include<stdio.h>
void main()
{
    int date, month, year, nextdate,  nextmonth, nextyear;
     
    printf("Enter any date : ");
    scanf("%d", &date);
    nextdate = date + 1;
    printf("Enter any month : ");
    scanf("%d", &month);
    nextmonth = month + 1;
    printf("Enter any year : ");
    scanf("%d", &year);
    nextyear = year + 1;
    printf("Next date is : %d/%d/%d",nextdate, nextmonth, nextyear);

    if ( date<28 )
    {
        date++;
    }
    else{
        if (date == 28 && month == 2 && (year%4) != 0)
        {
            date=1;
            month++;
        }
        else if (date == 29 && month == 2 && (year%4) == 0)
        {
            date=1;
            month++;
        }
        else if (date == 30)
        {
            switch (month)
            {
                case 4 :case 6: case 9: case 11:
                break;
            }
              month++;
        }      
        else if (date == 31)
        {
            switch (month)
            {
                case 1 :case 3: case 5: case 7: case 8: case 10: case 12:
                break;
            }
        }    
    }
 if(year==13)
 {
   month=1;
   year++;
 }
 printf("%d/%d/%d",date,month,year);
}