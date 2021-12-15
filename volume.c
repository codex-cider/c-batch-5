//cube and cuboid
#include <stdio.h>
void volumeOfCube();
void volumeOfCuboid();
void main()
{
    int option;
    printf("press 1 for volume of cube\n");
    printf("press 2 for volume of cuboid\n");
    scanf("%d", &option);

    if (option == 1)
    {
        volumeOfCube();
    }
    else if (option == 2)
    {
        volumeOfCuboid();
    }

    else
    {
        printf("invalid");
    }
}

void volumeOfCube()
{
    float a;
    printf("enter the value of a is:");
    scanf("%f", &a);

    float volume;
    volume = a * a * a;
    printf("volume of cube is-%.1f\n", volume);
}
void volumeOfCuboid()
{
    float w, h, l;
    printf("enter the value of w is:");
    scanf("%f", &w);
    printf("enter the value of h is:");
    scanf("%f", &h);
    printf("enter the value of l is:");
    scanf("%f", &l);
    float volume;
    volume = w * h * l;
    printf("volume of cuboid is-%.1f\n", volume);
}
