#include<stdio.h>
void volume_of_cylinder();
void volume_of_cube();
void volume_of_cylinder()
{
   float r,h;
   float pi=3.14;
   printf("enter the radius :");
   scanf("%f",&r); 
   printf("enter the hieght :"); 
   scanf("%f",&h);
   float volume_of_cylinder=pi*r*r*h;
   printf("volume of cylinder :%.2f\n",volume_of_cylinder);
}
void volume_of_cube()
{
   float a;
   printf("enter the area :");
   scanf("%f",&a); 
   float volume_of_cube=a*a*a;
   printf("volume of cube :%.2f\n",volume_of_cube);
}
void main()
{
   int option;
    printf("Enter one for volume of cylinder\n");
    printf("Enter two for volume of cube\n");
    scanf("%d",&option);
    if(option==1)
    {
        volume_of_cylinder();
    }
    else if(option==2)
    {
        volume_of_cube();
    }
    else{
        printf("wrong option");
    }
}