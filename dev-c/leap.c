#include<stdio.h>
int main()
{
	int n;
	printf("enter the year:");
	scanf("%d",&n);
	if(n%4==0)
		printf("year is leap year ");
	else
		printf("year is not leap year ");	
	return 0;
}
