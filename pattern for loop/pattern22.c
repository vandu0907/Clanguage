//pattern 22
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("\t %c",j+64);
		}
		printf("\n");
	}
}