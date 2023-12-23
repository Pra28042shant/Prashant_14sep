#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"Enter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	cout<<"\nEnter C : ";
	cin>>c;
	
	if (a>b)
	{
		if (a>c)
		{
			cout<<"A is Greatest";
		}
		else
		{
			cout<<"C is Greatest";
		}
	}
	else
	{
		if (b>c)
		{
			cout<<"B is Greatest";
		}
		else
		{
			cout<<"C is Greatest";
		}
	}
}
