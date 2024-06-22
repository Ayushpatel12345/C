#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("input the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;	
	}
	printf("factoral of %d is %d\n",n,f);
	return 0;
}

