//Program to take two inputs from the user amd prints their sum 
#include<iostream>
using namespace std;
int main()
{
	int num1, num2 , sum ; //will hold the first the second input and the sum.
	cout<<"Enter the numbers: "<<endl;
	cin>>num1>>num2;
	sum = num1 + num2;
	cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
	return 0;
}
