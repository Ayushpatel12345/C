#include<stdio.h>
int main()
{
	int arr[100];
	int i,max,min,n;
	printf("\nenter array:");
	scanf("%d",&n);
	
	printf("enter the element in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	//find maximum and minimum arr
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			max=arr[i];
		}
	}
	printf("\n\n maximum element is:%d",max);
	printf("\n\n minimum element is:%d",min);
	return 0;
}
