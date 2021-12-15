#include<stdio.h>
void volumeOfCylinder();
void volumeOfCube();
void volume_of_cylinder()
{
   float r, h;
   float pi = 3.14;
   printf("enter the radius :");
   scanf("%f", &r); 
   printf("enter the height :"); 
   scanf("%f", &h);
   float volumeOfCylinder = pi * r * r * h;
   printf("volume of cylinder : %.2f\n", volumeOfCylinder);
}
void volumeOfCube()
{
   float a;
   printf("enter the area : ");
   scanf("%f", &a); 
   float volumeOfCube = a * a * a;
   printf("volume of cube : %.2f\n", volumeOfCube);
}
void main()
{
   int option;
    printf("Enter one for volume of cylinder \n");
    printf("Enter two for volume of cube \n");
    scanf("%d", &option);
    if(option == 1)
    {
        volumeOfCylinderr();
    }
    else if(option==2)
    {
        volumeOfCube();
    }
    else
    {
        printf("This is Wrong option");
    }
}