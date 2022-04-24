//Arrays
#include<iostream>
using namespace std;
int main()
{
	int marks[4] = {23, 45,56,89};	
	cout<<marks<<endl;
	cout<<"These are marks"<<endl;
	cout<<"Marks using For loop"<<endl;
	for ( int i =0 ; i<4;)
	{
		cout<<"The value of marks" << i +1<<" is "<< marks[i]<<endl;
		i = i+1; 
	}
	cout<<" Marks using while loop"<<endl;
	int i = 0;
	while (  i < 4 )
	{
		cout<<"The value of marks"<< i + 1<< " is "<<marks[i]<<endl;
		i = i + 1;
	}
// Pointers and arrays 
	//1
	cout<<marks<<endl; // marks already stores the address of zeroth element of array marks
	for (int i = 0; i<4 ; i++)
	{
		cout<<*(marks+i)<<endl;//marks++ is not allowed in this case
	}
	//2
	int *p;
	p = marks;
	cout<<p<<endl;
	cout<<*p<<endl;
	for ( int i = 0; i < 4;)
	{
		cout<<"The value of *(p + "<<i<<") " <<*(p + i)<<endl;
		i = i + 1;
	}
	//3
	int* y;
	y = marks;
	cout<<y<<endl;
	for (int i = 0; i< 4; i++)
	{
		cout<<*y<<endl;
		y++;
	}
}

