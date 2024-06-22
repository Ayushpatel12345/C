#include<stdio.h>
#include<conio.h>
struct arthimetic
{
 int x;
 int y;
 int z;
};
void main()
{
struct arthimetic e;
printf("\n enter 1st number");
scanf("%d",&e.y);
printf("\n enter 2nd number");
scanf("%d",&e.z);
e.x=e.y+e.z;
printf("add=%d",e.x);
getch();
}
