#include<stdio.h>
main()
{
	int n,i,sum=1;
	printf("Enter End Value : ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		sum=sum*i; 
	}
	printf("Sum of Value : %d",sum);
}
