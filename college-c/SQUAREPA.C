#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	clrscr();

	printf("\n enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=n;j++)
	   {
	      if(j==1 || j==n || i==1 || i==n)
	      {
		 printf("*");
	      }
	      else
	      {
	       printf(" ");
	      }
	    }
	    printf("\n");
	 }
getch();
}
