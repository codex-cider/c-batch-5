#include <stdio.h>
void medium (int a, int b)
{
    int c;
    printf("Hindi = %d \n", a);
    printf("English = %d \n", b);
    return c = (a + b) / 2;
}
void main (int a, int b)
{
   int hindi, english; 

   printf("Type here number of hindi medium student : ");
   scanf("%d", &hindi);

   printf("Type here number of english medium student: ");
   scanf("%d", &english);

   medium(hindi, english);

   int average = medium( );
}

