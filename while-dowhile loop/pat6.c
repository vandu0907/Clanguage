//dowhile pat6
#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			printf("\t%d",i);
			j++;
		}
		printf("\n");
		i=i+2;	
	}
}