#include<stdio.h>
int main()
{
	int a[100],n,j,i,temp=0;
	
	printf("\n enter the array:");
	scanf("%d",&n);
	
	printf("\n enter the array element:\n");
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);	
	}
	
	for(i=0;i<n;i++) //loop for ascending
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n\n ascending order:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
	for(i=0;i<n;i++)  // decsending order
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n descending ordrer:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;	
}
