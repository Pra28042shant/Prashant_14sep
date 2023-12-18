#include<stdio.h>
main()
{
	int a[5],b[5],i;
	
	printf("***********Enter Value 1 : ***************");
	for (i=0;i<4;i++)
	{
		printf("\nEnter Value : ");
		scanf("%d",&a[i]);
	}
	for (i=0;i<4;i++)
	{
		printf("\nValue %d is  : %d",i,a[i]);
	}
	printf("\n***********Enter Value 2 : ***************");
	for (i=0;i<4;i++)
	{
		printf("\nEnter Value : ");
		scanf("%d",&b[i]);
	}
	for (i=0;i<4;i++)
	{
		printf("\nValue %d is  : %d",i,b[i]);
	}
	
	printf("\n***********Addition of 2 Array : ***************");
	for (i=0;i<4;i++)
	{
		printf("\nAddition %d is  : %d",i,a[i]+b[i]);
	}
	
	
}
