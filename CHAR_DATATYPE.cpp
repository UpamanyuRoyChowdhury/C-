//Char datatype 
//Program that reads from the user a singlke character and prints its ascii value 
#include<iostream>
using namespace std;
int main()
{
	char InputChar;
	int ASCIIValue;
	cout<< "Please enter a character: "<<endl;
	cin>>InputChar;
	ASCIIValue = (int)InputChar;
	cout<<"The ASCII value of "<<InputChar<<" is "<<ASCIIValue<<endl;
	return 0;
}


