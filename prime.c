#include<stdio.h>
void main()
{
	int i,n,prime=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		prime=0;
		}}
		if(prime==1)
		{
			printf("%d is  a prime number",n);
			
		}
		if(prime==0)
		{
			printf("%d is not prime number",n);
		}
	
}
