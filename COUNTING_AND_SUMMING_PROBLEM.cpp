//Program that prints a positive integer num and prints the number of digits in num and their sum
#include<iostream>
using namespace std;
int main()
{
	int num,sumdigits,countdigits,currentdigit,a;
	cout<<"Please enter a positive integer: "<<endl;
	cin>>num;
	a = num;
	sumdigits = 0;
	countdigits = 0;
	while (num > 0)
	{
		currentdigit = num%10;
		countdigits += 1;
		sumdigits += currentdigit;
		num = num/10;
	}
	cout<<"The sum of the digits of the "<<a<<" is "<<sumdigits<<endl;
}


