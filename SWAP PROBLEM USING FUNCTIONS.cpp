#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main()
{
	int a,b;
	a=3;
	b=4;
	cout<<"Before a:"<<a<<endl;
	cout<<"Before b:"<<b<<endl;
	swap(a,b);
	cout<<"After a:"<<a<<endl;
	cout<<"After b:"<<b<<endl;
	return 0;
}

void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}




