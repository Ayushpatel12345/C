#include<stdio.h>
int main()
{
	int n;
	printf("enter number=");
	scanf("%d",&n);
	if(n>80)
	{
		printf("a++ grade");
	}
	else if(n>65 && n<=80)
	{
		printf("a grade");
	}
	else if(n>35 && n<=65)
	{
		printf("b grade");
	}
	else
	{
		printf("no such grade");
	}
	return 0;
}