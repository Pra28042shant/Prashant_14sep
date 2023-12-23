#include<stdio.h>

myfun(n)
{
	int i,fact=1;
	for (i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("Factorial Number : %d",fact);
}

main()
{	
	myfun(3);
}
