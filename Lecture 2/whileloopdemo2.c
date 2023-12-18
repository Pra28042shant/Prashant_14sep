#include<stdio.h>
main()
{
	int n,i=1,ev=0,od=0,evsum=0,odsum=0;
	
	printf("Enter End Value : ");
	scanf("%d",&n);
	
	while (i<=n)
	{
		if (i%2==0)
		{
			printf("\n%d : This Number is Even",i);
			ev++;
			evsum = evsum+i;
		}
		else
		{
			printf("\n%d : This Number is Odd",i);
			od++;
			odsum += i;
		}
		i++;
		
	}
	
printf("\nEven Count : %d",ev);
printf("\nOdd Count : %d",od);
	
}
