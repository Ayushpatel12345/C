#include<stdio.h>
int main()
{
	int min,hr;
	printf("\n enter minutues:");
	scanf("%d",&min);
	hr=min/60;
	min=min%60;
	printf("\n hour:%d and minute:%d",hr,min);
	return 0;
}