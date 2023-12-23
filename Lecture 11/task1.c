#include<stdio.h>
main()
{
	FILE *fp;
	
	fp = fopen("test2.txt","w");
	
	fprintf(fp,"This is 1 st file");
	
	fclose(fp);
}
