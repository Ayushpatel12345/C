#include<stdio.h>
int main()
{
	char s[100];
	int special=0,i;
	
	printf("\nenter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
		{
		}
		else if(s[i]>=48 && s[i]<=57)
		{
		}
		else
		{
				special++;	
		}
	}
	printf("total alphabet:%d",special);
return 0;
}
