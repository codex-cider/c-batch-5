#include<stdio.h>
void main()
{
    int i;
    char ch[5]={'a','e','i','o','u'};
    for ( i=0;i<5;i++)
    {
    printf("ch[%d]=%c\n",i,ch[i]);
    printf("\n");
    printf("&ch[%d]=%d\n",i,&ch[i]);
    printf("\n");
    }
}