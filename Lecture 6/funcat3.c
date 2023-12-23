#include<stdio.h>
 
 myfun(n,n1)
 {
	printf("Number 1 : %d",n);
	printf("\nNumber 2 : %d",n1);
	
 	return n-n1;
 	
 }

main()
{
	int result = myfun(20,10);
	printf("\nSubstraction : %d",result);
}
