#include<stdio.h>
#include<conio.h>
void area_rect(int,int);
void area_circle(int);

void area_rect(int l,int w)
{
	int rct;
	rct=l*w;
	printf("\n area of rectangle=%d",rct);
}
void area_circle(int r)
{
	int cr;
	cr=3.14*r*r;
	printf("\n area of circle=%d",cr);
}
void main()
{
	int l,w,r;
	clrscr();
	printf("\n enter legnth=");
	scanf("%d",&l);
	printf("\n enter width=");
	scanf("%d",&w);
	printf("\n enter circle=");
	scanf("%d",&r);
	area_rect(l,w);
	area_circle(r);
	getch();
}




