#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],temp;
	int i,n,j;
	
	printf("\n enter the string:");
	scanf("%s",s);
	
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1);j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("\nassending order string:");
	{
		printf("%s",s);
	}
	return 0;
}