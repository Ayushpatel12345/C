#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char str[200],rev[200];
	printf("\n enter the string:");
	gets(str);
	n=strlen(str);
	printf("\n reversed string is:");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	printf("\n\n-----------------------------------------------------------");
	printf("\n\n enter the string:");
	gets(str);
	strcpy(rev,str);
	strrev(rev);
	(strcmp(rev,str)==0) ? printf("\npalidrome string",str) : printf("\n not palidrome string",str);
	return 0;
}
