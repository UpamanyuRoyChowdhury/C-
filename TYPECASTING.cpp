//Typecasting 
#include<iostream>
using namespace std;
int main()
{
	int x1 , x2;
	double y1, y2;
	x1 = 6;
	y1 = 6.7;
	y2 = (double)6; //Typecasting a int into a double 
	x2 = (int)6.7; //Typecasting a double in int 
	cout<<y2<<endl;
	cout<<x2<<endl;
	
	int x;
	double y;
	cout<<5/2<<endl; // Since 5 and 2 are both integers so the value is an integral value 
	cout<<5.0/2.0<<endl;
	cout<<5.0/2<<endl; // (implicit cast) a double is divided by an int 
	x = 5/2;
	y = 5/2;
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}



