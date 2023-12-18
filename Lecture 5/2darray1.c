#include<stdio.h>
main()
{
	int a[3][3],i,j,b[3][3];
	
	printf("*********Number 1 : *********");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("\nEnter Number : ");
			scanf("%d",&a[i][j]);
		}
	}
		for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("\n*********Number 2 : *********");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("\nEnter Number : ");
			scanf("%d",&b[i][j]);
		}
	}
		for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n*********Addition: *********\n");
		for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
