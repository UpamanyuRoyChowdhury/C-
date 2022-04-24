#include<iostream>
#include<cmath>
double solvequadratic(double a , double b , double c, double &p);
using namespace std;
int main()
{
	double a , b , c, p;
	double rootvalue;
	cout<<"Enter the values of a , b , c"<<endl;
	cin>>a>>b>>c;
	cout<<"The quadratic equation is ("<<a<<") x^2 + ("<<b<<") x + "<<c<<endl;
	cout<<"The solution of the quadratic equation is : "<<endl;
	rootvalue = solvequadratic(a,b,c,p);
	cout<<p<<endl;
	cout<<rootvalue<<endl;
	return 0;
}
double solvequadratic(double a , double b , double c, double &p) 
{
	double x1,x2,D ;
	D = sqrt(b*b - 4*a*c);
	if( a == 0 && b != 0 && c != 0)
	{
		cout<<"A has to be greater than 0 for quadratic equation"<<endl;
		x1 = -b/c;
		x2 = -b/c;
		p = x1;
		return x2;
	}
	else if ( a == 0 && b == 0 && c != 0) 
	{
		cout<<"No solution"<<endl;
		x1 = 0;
		x2 = 0;
		p = x1;
		return x2;	
	}
	else if (D < 0)
	{
		cout<<"No real solution"<<endl;
	}
	else if( a == 0 && b == 0 && c == 0 )
	{
		cout<<"All real solution"<<endl;
	}
	else
	{
		x1 = (-b + D) / 2*a;
		x2 = (-b - D) / 2*a;
		p = x1;
	    return x2;
	}
}





