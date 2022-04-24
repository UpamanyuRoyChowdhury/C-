//AND Operator 
#include<iostream>
using namespace std;
int main()
{
	bool b1 , b2 , b3, b4;
	b1 = true;
	b2 = false; 
	b3 = b1 && b2;
	b4 = b1 && !b2;
	cout<<b2<<"\n"<<b3<<"\n"<<b4<<endl;
	return 0;
}


