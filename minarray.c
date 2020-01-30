#include<stdio.h>
void main()
{
	int i=0,j=0,n,min=0;
	int a[i];
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements of the array are");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("to find the minimum number in an array");
	for(i=0;i<n;i++)
	{
		
	
            min=a[0];
			if(min>a[i])
			{
			min=a[i];
			}
		
		}
		printf("the minimum number in the array is %d",min);
}


