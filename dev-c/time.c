#include<stdio.h>
int main()
{
	int time;
	printf("enter numer=");
	scanf("%d,&time");
	if(time<10)
	{
		printf("good morning");
	}
	else if(time>=10 && time<18)
	{
		printf("good evning");
	}
	else
	{
		printf("good night");
	}
	return 0;
}