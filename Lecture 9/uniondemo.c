#include<stdio.h>
union myunion{
	
	int a;
	int b;
	int c;
};


main()
{
	union myunion u1,u2,u3;
	
	u1.a=20;
	u2.b=30;
	u3.c=40;
	
	printf("A : %d",u1.a);
	printf("\nB: %d",u2.b);
	printf("\nC : %d",u3.c);
	
}
