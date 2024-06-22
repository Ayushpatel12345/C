#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str1[100],str2[100];
	int i=0;
	
	printf("\n enter the string:");
	fgets(str1,sizeof str1,stdin);
	
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	
	printf("\n\n first string is:%s",str1);
	printf("\n\n second string is:%s",str2);
	printf("\n\n number of character copied: %d\n",i);
	return 0;
}