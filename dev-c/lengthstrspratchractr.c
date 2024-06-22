#include<stdio.h>
int main()
{
	char s[100];
	int i=0;
	printf("\n enter the string:");
	gets(s);
	printf("\n string of seprate character:",s);
	while(s[i]!='\0')
	{
		printf("%c ",s[i]);
		i++;
	}
	printf("\n");
	return 0;
}
