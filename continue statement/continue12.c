#include<stdio.h>
int main()
{
	int i,total=0;
	for(i=1;i<=10;i++)
	{
		total=total+i;	
		printf(" %d",i);
	}
	printf("\n total:%d",total);
}