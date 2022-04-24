//Searching String
#include<iostream>
using namespace std;
int main()
{
	string str = "abcdefgcdhijkl";
	cout<<str.find("de")<<endl;
	if(str.find("xyz") == string::npos) 
	{
		cout<<"Not Found"<<endl;
	}
	else 
	{
		cout<<"Found"<<endl;
	}
	cout<<str.find("cd")<<endl; //Returns the first occurence position of "cd".
	cout<<str.find("cd",3)<<endl; //Gives the first occcurence of c after position 3.
	return 0;
}






