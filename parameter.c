// 3 parameter
// primciple
//rate
//time

#include <stdio.h>
void simpleintrest();
void area();

void simpleintrest(principle, rate, time)
{
    int principle, rate, time;
    printf("enter the value of principle:");
    scanf("%f", &principle);
    printf("enter the value of rate:");
    scanf("%f", &rate);
    printf("enter the value of time:");
    scanf("%f", &time);
    float simpleintrest;
    simpleintrest = principle * rate * time / 100;
    printf("simpleintrest is-%f", simpleintrest);
}
void area(pei, radius)
{
    int pei = 3.14;
    int radius;
    printf("enter the value of radius:");
    scanf("%f", &radius);
    float area = pei * radius * radius;
    printf("area of circle is:%f", area);
}
void main()
{
    int option;
    printf("press 1 for simple intrest");
    printf("press 2 for area");
    scanf("%d", &option);
    void simpleintrest();
    void area();
}