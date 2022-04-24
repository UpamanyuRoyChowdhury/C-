//A program that reads from the user a value and classifies it 
#include<iostream>
using namespace std;
int main()
{
	char userch;
	cout<<"Please enter a character : "<<endl;
	cin>>userch;
	
	if (userch >= 'a' && userch <= 'z')
	{
		cout<<userch<<" is a lower case letter"<<endl;
	}
	else if (userch >= 'A' && userch <= 'B')
	{
		cout<<userch<<" is an upper case letter"<<endl;
	}
	else if (userch >= 48 && userch <= 57)
	//else if(userch>= '0' && userch <= '9') can also be used
	{
		cout<<userch<<" is a digit"<<endl;
	}
	else
	{
		cout<<userch<<" is not an alphanumeric character "<<endl;
	}
}




