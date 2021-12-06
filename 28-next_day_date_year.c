 #include <stdio.h>
void main()
{
    int date,month,year,ndate,nmonth,nyear;
    printf("enter the date :");
    scanf ("%d",&date);
    printf("enter the month :");
    scanf ("%d",&month);
    printf("enter the year :");
    scanf ("%d",&year);
    ndate=date+1;
    nmonth=month+1;
    nyear=year+1;
    if (date<28)
    {
        date++;
        month=nmonth;
    }
    else
    {
        if(date==29 && month==2 && year%4==0)
        {
            ndate=1;
            
        }
        else 
        {
            ndate=1;
            
        }
        switch(month)
        {
            case 4:case 6:case 9:case 11:;
            date==30;
            ndate=1;
            
        }
        switch(month)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:;
            date==31;
            date=1;
            
        }
        
    }
    if(month==13)
    {
        month=1;
        year++;
    }
    printf("%d/%d/%d\n",ndate,nmonth,nyear);
}









