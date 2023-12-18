/*
without return type without argment
*/
void sumOfTwo();
#include<stdio.h>
int main(){
	int i;
	
	for(i=1;i<=5;i++){
		sumOfTwo();
	}
	printf("\n bye bye-----");
}

void sumOfTwo(){
	
	int a,b,c;
	
	printf("\n enter first value :");
	scanf("%d",&a);
	
	printf("\n enter second value :");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("\n sum of %d and %d is %d",a,b,c);
}
