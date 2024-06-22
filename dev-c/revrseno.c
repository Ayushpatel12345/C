#include<stdio.h>
int main()
{
	int i,n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;n>=i;n--)
	{
		printf("\t%d",n);
	}
	return 0;
}
