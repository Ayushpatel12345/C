#include<stdio.h>
int main()
{
	char s[100];
	int alpha=0,i;
	
	printf("\nenter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
	alpha++;
	}
	printf("total alphabet:%d",alpha);
return 0;
}
