#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t%d",2*i);
		sum+=2*i;
	}
	printf("\n sum of natural number %d is %d\n",n,sum);
	return 0;
}
