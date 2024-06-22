#include<stdio.h>
int main()
{
	int ang1,ang2,ang3;
	printf("input two triangle spreated by comma:");
	scanf("%d\t%d",&ang1,&ang2);
	ang3=180-(ang1+ang2);
	printf("\nthird angle of triangle:%d\n",ang3);
	return 0;
}
