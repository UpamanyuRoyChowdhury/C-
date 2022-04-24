//Program that reads from the user an integer and prints its absolute value. 
#include<iostream>
using namespace std;
int main()
{
	int integer,absolute;
	cout<<"Enter an integer"<<endl;
	cin>>integer;
	absolute = integer;
	if(absolute < 0);
	{
		absolute = absolute * (-1);	
	}
	cout<<"The absolute value of "<< integer<<" is "<<"|"<<integer<<"| = "<<absolute<<endl;
	return 0;
}
