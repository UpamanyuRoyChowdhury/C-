//2D Arrays
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter values of n and m"<<endl;
	cin>>n>>m;
	int arr[n][m];
	for (int i = 0; i<n ; i++)
	{
		for (int j = 0; j<m; j++)
		{
			cout<<"Enter value of the element in "<<i<<"st row "<<j<<"th column"<<endl;
			cin>>arr[i][j];
		}
	}
	cout<<"The matrix is "<<endl;
	for (int i = 0; i<n ; i++)
	{
		for (int j = 0; j<m; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
//searching an element 
	int x;
	cin>>x;
	bool flag;
	for(int i = 0 ;i< n ; i++)
	{
		for (int j=0; j<m ; j++)
		{
			if (arr[i][j] == x)
			{
				cout<<"Element is found at "<<i+1<<" th row and "<<j+1<<" th column"<<endl;
				flag = true;
			}
			else 
			{
				flag = false;
			}
		}
	}
	if ( flag == false)
	{
		cout<<"Element not found"<<endl;
	}	
}
//Spiral order matrtix traversal

