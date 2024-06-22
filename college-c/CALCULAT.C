#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	char ch;
	clrscr();
	printf("\n enter 1st number=");
	scanf("%f",&a);
	printf("\n enter 2nd number=");
	scanf("%f",&b);
	printf("\n enter user choice to perform operaion=");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':c=a+b;
			 printf("output=%f",c);
			 break;
		case '-':c=a-b;
			 printf("output=%f",c);
			 break;
		case '*':c=a*b;
			 printf("output=%f",c);
			 break;
		case '/':c=a/b;
			 printf("output=%f",c);
			 break;
		default:printf("invalid operation");
			break;
	 }
	 getch();
}


