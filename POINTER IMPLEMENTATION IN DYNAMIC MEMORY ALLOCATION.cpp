//Dynamaic Memory allocation 
#include<iostream>
using namespace std;
int main()
{
	//1 - using pointers 
	int size;
	int *ptr;

	cout<<"Enter number of values you want to store(size of array)"<<endl;
	cin>>size;
	ptr = new int[size];//Creating dynamic array
	cout<<"Enter values to be stored in the array"<<endl;
	for (int i = 0; i < size; i++ )
	{
		cin>>ptr[i];	
	}
	cout<<"Values in the array are:"<<endl;
	for (int i = 0; i < size; i++)
	{
		cout<<ptr[i]<<endl;
	}  
	//2 using normal method
	int i;
	cout<<"Enter the size of array"<<endl;
	cin>>i;
	int numbers[i];
	for (int j = 0; j < i; j++) 
	{
		cout<<"Enter number :"<<j +1<<endl;
		cin>>numbers[j];
	}
	cout<<"Values in the array are:"<<endl;
	for (int j = 0; j<i; j++)
	{
		cout<<numbers[j];
	}
	return 0;
} 




