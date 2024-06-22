// A
// BB
// CCC

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,c;
	clrscr();
	c=65;
	printf("\n enter a number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{

	   for(j=0;j<=i;j++)
	   {
	    printf("%c",c);

	   }
	    printf("\n");
	    c++;

	}
getch();
}