#include<stdio.h>
#include<conio.h>
struct smp
{
   int sno;
   char sname[20];
   int age;
};
void main()
{
	struct smp e[10];
	int i,n;
	clrscr();
	printf("\n enter number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter sno");
		scanf("%d",&e[i].sno);
		printf("\n enter sname");
		scanf("%s",&e[i].sname);
		printf("\n ennter age");
		scanf("%d",&e[i].age);
	 }
	 printf("\n information of student");
	 for(i=0;i<n;i++)
	 {
	    printf("\n smp no=%d",e[i].sno);
	     printf("\n smp name=%s",e[i].sname);
	     printf("\n smp age=%d",e[i].age);
	  }
	 getch();
}

