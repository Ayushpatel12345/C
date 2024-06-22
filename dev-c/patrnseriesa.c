#include<stdio.h>
int main()
{
	int i,n,j,c=65;
	printf("\n enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
				printf("%c",c);
				c++;
		}		
     	printf("\n");
	}
	return 0;
}
