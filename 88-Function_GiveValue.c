#include <stdio.h>
void medium (int a, int b)
{
    printf("Hindi = %d \n", a);
    printf("English = %d \n", b);
}
void main (int a, int b)
{
   int hindi, english; 

   printf("Type here number of hindi medium student : ");
   scanf("%d", &hindi);

   printf("Type here number of english medium student: ");
   scanf("%d", &english);

   medium(hindi, english);
}
