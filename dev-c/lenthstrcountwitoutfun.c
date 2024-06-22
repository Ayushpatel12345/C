#include<stdio.h>
int main()
{
	char s[100];
	int i,length=0;
	printf("\n enter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		length++;
	}
	printf("\n length of string:%d",length);
	return 0;
}