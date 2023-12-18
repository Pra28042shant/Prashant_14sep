#include<stdio.h>
main()
{
	int a[5],i,sum=0;
	
	for (i=0;i<4;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&a[i]);	
	}
	
		for (i=0;i<4;i++)
	{
		printf("\nNumber %d is %d",i,a[i]);
		sum+=a[i];
	}
	printf("\nSum of Array is : %d",sum);
}
