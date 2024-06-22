#include<stdio.h>

void hello(int n);

int main()
{

	hello(5
	);	
	return 0;
}

void hello(int n)
{
	if(n==0)
	{
		return;
	}
	printf("\n hello world");
	hello(n-1);
}