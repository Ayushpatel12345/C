//create udf without readiment string function(length,lower,upepr,rev)
/*#include<stdio.h>
#include<conio.h>
#include<string.h>
int len(char *str)
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
void main()
{
	char s1[10];
	int l;
	clrscr();
	printf("\n enter 1st string:");
	scanf("%s",&s1);
	l=len(s1);
	printf("\n length of string =%d",l);
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
void lwr(char *str)
{
	char lwr[10];
	int i;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>=65 && str[i]<=90)
	{
		lwr[i]=str[i]+32;
		lwr[i+1]='\0';
	}
	else
	{
		lwr[i]=str[i];
		lwr[i+1]='\0';
	}
	printf("\n afterconert in lower case: %s",lwr);
}
void main()
{
	char s1[10];
	clrscr();
	printf("\n enter 1st string:");
	scanf("%s",&s1);
	lwr(s1);
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
void upr(char *str)
{
	char upr[10];
	int i;
	for(i=0;str[i]!='\0';i++)
	if(str[i]>=97 && str[i]<=122)
	{
		upr[i]=str[i]-32;
		upr[i+1]='\0';
	}
	else
	{
		upr[i]=str[i];
		upr[i+1]='\0';
	}
	printf("\n afterconert in upper case: %s",upr);
}
void main()
{
	char s1[10];
	clrscr();
	printf("\n enter 1st string:");
	scanf("%s",&s1);
	upr(s1);
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev(char *s1)
{
	int i,l;
	l=strlen(s1);
	for(i=l-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
}
void main()
{
	char s1[10];
	clrscr();
	printf("\n enter 1st string:");
	scanf("%s",&s1);
	rev(s1);
	getch();
}*/
