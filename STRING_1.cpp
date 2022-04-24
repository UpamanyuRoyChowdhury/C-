//String
#include<iostream>
#include<string> 
using namespace std;

int main()
{
	//Concatenate
	string str, str1,str2;
	str = "abc";
	cout<<str + "def"<<endl;
	//Reading
	cout<<"Enter the string"<<endl;
	getline(cin ,str1);
	cout<<str1<<endl;
	//Indexing 
	cout<<str1[0]<<" "<<str1[2]<<" "<<str1[4]<<" "<<str1[8]<<endl;
	//Slicing
	str2 = str1.substr(2,4);
	cout<<str2<<endl;
	//length
	cout<<str1.length()<<endl;
	return 0;
}
