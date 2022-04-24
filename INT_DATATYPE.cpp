//Weeks and days problem 
#include<iostream>
using namespace std; 

int main()
{
	int x;
	int y;
	int z;
	cout<<"Please enter the number of days you travelled :"<<endl;
	cin>>x;
	y = x/7; 
	z = x%7;
	cout<<"You travelled "<<y <<"weeks and "<<z <<"days"<<endl;
	return 0;
}
