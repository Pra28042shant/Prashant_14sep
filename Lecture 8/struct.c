#include<stdio.h>

struct mystructure{
	int a;
	int b;
};

main()
{
	struct mystructure s1;
	s1.a=10;
	s1.b = 20;
	printf("A : %d",s1.a);
	printf("\nB : %d",s1.b);
}
