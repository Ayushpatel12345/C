#include<stdio.h>

int fibonacci(int i);

int main()
{
	int n,i;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",fibonacci(i));
	}
	return 0;
}

int fibonacci(int i)
{
	if(i==0)
	{
		return 0;	
	}
	if(i==1)
	{
		return 1;
	}
	return fibonacci(i-1) + fibonacci(i-2);
}