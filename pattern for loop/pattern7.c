//pattern 7
#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)//row
	{
		for(j=1;j<=5;j++,k++)//column
		{
			printf("\t %d",k);
		}
		printf("\n");
	}
}