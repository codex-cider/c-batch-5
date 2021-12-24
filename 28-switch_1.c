#include<stdio.h>
void main()
{
    int a;
    printf("Enter any value: ");
    scanf("%d",&a);
    switch (a)
    {
        case 20:          //break keybord hatane ke bad next statement bi print ho jata h
        printf("A is 20");
    
    
        case 30:
        printf("A is 30");
        break;
        
        case 40:
        printf("A is 40");
        break;
        
        case 50:
        printf("A is 50");
        break;
       
        default:
        printf("this is default value: ");
        break;
    }
}

