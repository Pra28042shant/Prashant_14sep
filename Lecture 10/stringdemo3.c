#include<stdio.h>
#include<string.h>
main()
{
	char a[]="Geeks";
	char b []="Rainbow";
	char c[] = "For";
	
	int result = strcmp(a,b);
	int result2 = strcmp(b,c);
	
	
	printf("%d",result);
	printf("\n%d",result2);
}
