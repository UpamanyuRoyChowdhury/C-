//implementation of pointer
//Call by reference 
#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp = x;
	x=y;
	y=temp;
} //this will not swap the values 
void swap_pointer(int *a , int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
} //this will swap the values
void swap_reference_var(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
} //this will swap the values

int main()                                   
{
	int a, b;
	cout<<"enter value of a"<<endl;
	cin>>a;
	cin>>b;
	swap_pointer (&a,&b);
	cout<<a<<endl;
	cout<<b<<endl;
	swap(a,b); //this will not swap a and b 
	cout<<a<<endl;
	cout<<b<<endl;
	swap_reference_var(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
}

