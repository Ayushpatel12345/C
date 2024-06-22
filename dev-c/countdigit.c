#include<stdio.h>
int main()
{
	char s[100];
	int digit=0,i;
	
	printf("\nenter the string:");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=48 && s[i]<=57)
		digit++;
	}
	printf("\n total of digit:%d",digit);
	return 0;	
}
