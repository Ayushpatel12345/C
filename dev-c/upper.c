#include<stdio.h>
int main()
{
	char ch;
	printf("enter number");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("uppercase");
	}
	else
	{
		printf("lowercase");	
	}
return 0;
}