#include<stdio.h>
int myFunc();
int main(){
	int x;
	x=myFunc();
	x = x + 10;
	printf("\n x = %d",x);
}
int myFunc(){
	int a;
	printf("\n enter any value :");
	scanf("%d",&a);
	return a;
}

