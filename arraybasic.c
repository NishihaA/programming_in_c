#include<stdio.h>
void main()
{
	int i=0,n,a[i];
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
}
