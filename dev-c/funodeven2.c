#include<stdio.h>

int oddeven(int n);

int main()
{
	int n;
	printf("\n enter the first number:");
	scanf("%d",&n);
	oddeven(n);
	return 0;
}

int oddeven(int n)
{
	(n%2==0) ? printf("\n no is even number") : printf("\n no is odd number");
}