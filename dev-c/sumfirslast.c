#include<stdio.h>
int main()
{
	int n,last,first,sum=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	last=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	sum=first+last;
	printf("\n first digit and last degit sum is:%d",sum);
	return 0;
}