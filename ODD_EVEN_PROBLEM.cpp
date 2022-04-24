//Write a program that reads from the user a positive integer , and determines its parity (even or odd ) 
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Please enter a positive integer :"<<endl;
	cin>>a;
	b = a%2;
	if(a <= 0)
	{
		cout<<"Number not accepted"<<endl;
	}
	else if(b == 0)
	{
		cout<<a<<" is an even number"<<endl;
	}
	else
	{
		cout<<a<<" is an odd number"<<endl;
	}
	return 0;
}




