//Reverse String 
#include<iostream>
using namespace std;
int main()
{
	int i;
	string name;
	cout<<"Enter your name:"<<endl;
	getline(cin, name);
	i = name.length();
	cout<<i<<endl;
	for (i >=0; i--;)
	{
		cout<<name[i];
	}
}
