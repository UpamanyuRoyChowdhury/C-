#include<iostream>
using namespace std;
int main()
{
	int rows , cols;
	cout<<"Enter the number of rows and columms:"<<endl;
	cin>>rows>>cols;
	int **table = new int*[rows]; 
	for (int i = 0; i<rows ; i++)
	{
		table[i] = new int[cols];
	}
	cout<<"Enter the values in arrays:"<<endl;
	for (int i = 0; i < rows ; i++)
	{
		for (int j = 0; j<cols ; j++)
		{
			cout<<"Enter the value in position row"<<i<<"column"<<j<<endl;
			cin>>table[i][j];
		}
	}
	for (int i = 0; i < rows ; i++)
	{
		for (int j = 0; j<cols ; j++)
		{
			cout<<table[i][j]<<" ";
		}
	cout<<endl;
	}
	
	for (int i = 0; i<rows ; i++)
	{
		delete[] table[i];
	}
	delete[]table;
	return 0;
}
