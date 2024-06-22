#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\n enter the first number");
  scanf("%d",&a);
  printf("\n enter the second number");
  scanf("%d",&b);
  printf("\n before swap");
  printf("\n A=%d",a);
  printf("\n B=%d",b);
  printf("\n after swap");
  c=a;
  a=b;
  b=c;
  printf("\n A=%d",a);
  printf("\n B=%d",b);
getch();
}

