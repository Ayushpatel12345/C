#include<stdio.h>
int main()
{
	int i,n,a=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			a++;
			break;
		}
	}
	if(a==0 && n!=1)
	{
		printf("\n prime number");
	}
	else
	{
		printf("\n prime not number");
	}
	return 0;
}
