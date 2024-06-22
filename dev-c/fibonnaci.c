#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("\n enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t%d",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}