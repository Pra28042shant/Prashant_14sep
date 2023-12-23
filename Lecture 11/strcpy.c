#include<stdio.h>

main()
{
	char a[30]="Prashant Shukla";
	char b[30];
	
	strcpy(b,a);
	
	printf("String is : %s",a);
	printf("\nString is : %s",b);
	
}
