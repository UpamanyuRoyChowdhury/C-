//Program to read the radius of a circle and print the area of the circle. 
#include<iostream>
#include<cmath> //Include cmath library to get the predefined value of pi to get a accurate value of area
using namespace std;

//const double PI = 3.14; (We can define a constant PI) 
int main()
{
	double radius;
	double Area_of_circle;
	cout<<"Enter the radius of the circle :"<<endl;
	cin>>radius;
	Area_of_circle = M_PI * (radius * radius);
	cout<<"Area of circle with the radius of "<<radius<<" is "<<Area_of_circle<<endl;
	return 0;
}
