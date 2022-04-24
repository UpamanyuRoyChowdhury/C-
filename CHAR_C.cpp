//Program that reads from the user a lower case letter and prints its corresponding upper case letter.
#include <iostream>
using namespace std;

int main()
{
	char lowercaseletter, uppercaseletter;
	int offset;
	
	cout<<"Please enter a lower case letter: "<<endl;
	cin>>lowercaseletter;
	offset = (int)(lowercaseletter - 'a');
	uppercaseletter = (char)('A' + offset);
	cout<<"The uppercase letter of "<<lowercaseletter<<" is "<<uppercaseletter<<endl;
	return 0;
}
