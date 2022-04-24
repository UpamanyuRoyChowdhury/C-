#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int x);
int main()
{ 
	int num;
	bool factors;
	cout<<"Please enter the num:"<<endl;
	cin>>num;
	factors = isprime(num);
	if (factors == true)
	{ 
		cout<<"The number is prime"<<endl;
	}
	else if(factors == false)
	{
		cout<<"The number is not prime"<<endl;
	}
	return 0;
}

//Method 1:
bool isprime(int x)
{
	int countdiv, i;
	countdiv = 0;
	for ( i = 1; i <= x; i++) 
	{
		if(x % i == 0) 
		{
			countdiv++;
		}
	}
	if (countdiv == 2)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

//Method 2:
bool isprime(int x)
{
	int countdiv, i;
	countdiv = 0;
	for ( i = 1; i <= x/2; i++) 
	{
		if(x % i == 0) 
		{
			countdiv++;
		}
	}
	if (countdiv == 1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

//Method 3:
bool isprime(int x)
{
	int countdiv, i;
	countdiv = 0;
	for ( i = 1; i <= sqrt(x); i++) 
	{
		if(x % i == 0) 
		{
			countdiv++;
		}
	}
	if (countdiv == 1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}








