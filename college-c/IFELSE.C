

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	clrscr();
	printf("\n enter a number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	   for(j=1;j<=10;j++)
	   {
		if(n%2==0)
	      {
		 printf("*");
	      }
	      else
	      {
	       printf(" + ");
	      }
	   }
	}
	printf("\n");
getch();
}
