#include<stdio.h>
#include<string.h>
int main()
{
	char mn[10];
	printf("\n enter the mobile number:");
	gets(mn);
	if(strlen(mn)==10)
	{
		printf("number is correct");
	}
	else
	{
		printf("number is not correct");
	}
	return 0;
}