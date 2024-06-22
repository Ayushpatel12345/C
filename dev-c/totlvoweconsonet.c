#include<stdio.h>
int main()
{
	char s[100];
	int i,vowel=0,consonent=0;
	
	printf("\n enter the string:");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
		   s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		    vowel++;
		else 
			consonent++;
	}
	printf("total vowel:%d and total consonet:%d",vowel,consonent);
return 0;
}
