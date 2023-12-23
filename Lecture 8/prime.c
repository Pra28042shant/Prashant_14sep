#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			c++;	
		}
	}
	if (c==2)
	{
		printf("This Number is Prime Number");
	}
	else {
		printf("This Number is not Prime Number");
	}
}
