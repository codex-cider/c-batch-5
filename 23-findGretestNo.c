#include<stdio.h>
void main()
{
    int a,b,c,greter;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);

       greter=a;
    if(b>greter)
    {
        greter=b;
    }
    
    if(c>greter)
    {
        greter=c;
    }
    
    printf("The largest out of three no. is %d",greter);
}
