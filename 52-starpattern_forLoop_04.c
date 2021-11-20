#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)     //row 
	{
		for(j=i;j<i;j++)    //space
		{
			printf("  ");
		}
		for(k=i;k<=5;k++)    //column
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}