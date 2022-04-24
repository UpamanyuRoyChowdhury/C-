#include<iostream>
using namespace std;
int main()
{
	int *Numbers;
	int size;
	cout<<"Please enter the size of array :"<<endl;
	cin>>size;
	Numbers = new int[size];
	for (int i = 0; i < size; i ++ )
	{
		cout<<"Enter the value of number in position :"<<i<<endl;
		cin>>Numbers[i];
	}
	cout<<"The values in Array are :"<<endl;
	for (int i = 0; i < size; i ++ )
	{
		cout<<Numbers[i]<<" ";
	}
	delete[]Numbers;
	Numbers = NULL;
}
