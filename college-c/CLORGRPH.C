#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,i=1;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 while(i<=60)
 {
   if(i>=60)
   setcolor(1);
   else if(i>=50)
   setcolor(2);
   else if(i>=40)
   setcolor(3);
   else if(i>=30)
   setcolor(4);
   else if(i>=20)
   setcolor(5);
   else if(i>=10)
   setcolor(6);
   else
   setcolor(7);
   circle(250,250,i);
   delay(100);
   i++;
 }
 getch();
}