#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,j,k,s;
 clrscr();
 printf("\n enter number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(s=1;s<=n-i;s++)
  {
     printf(" ");
  }
  for(j=1;j<=i;j++)
  {
     printf("*");
  }
  for(k=2;k<=i;k++)
  {
    printf("*");
  }
  printf("\n");
  }
  for(i=n-1;i>=1;i--)
  {
    for(s=1;s<=n-i;s++)
  {
     printf(" ");
  }
  for(j=1;j<=i;j++)
  {
     printf("*");
  }
  for(k=2;k<=i;k++)
  {
    printf("*");
  }
  printf("\n");
 }
getch();
}