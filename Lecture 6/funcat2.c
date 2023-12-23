#include<stdio.h>

myfun(n,n1)
{
	printf("N : %d",n);
	printf("\nN1 : %d",n1);
}

main()
{
	int n1,n2;
	printf("Enter Number : ");
	scanf("%d",&n1);
	printf("Enter Number : ");
	scanf("%d",&n2);
	
	myfun(n1,n2);
}
