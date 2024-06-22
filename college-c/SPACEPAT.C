#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,s;
	clrscr();

	printf("\n enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(s=1;s=n-i;s++)
	    {
	      printf(" ");
	    }

	   for(j=1;j<=i;j++)
	   {
	    printf("*");

	   }
	    printf("\n");
	}
getch();
