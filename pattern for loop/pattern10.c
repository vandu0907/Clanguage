//pattern 10
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("\t%d",j);
		}
		printf("\n");
	}
}