#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n a :");
	scanf("%d",&a);
	printf("\n b :");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("\n a : %d",a);
	printf("\n b : %d",b);
}
