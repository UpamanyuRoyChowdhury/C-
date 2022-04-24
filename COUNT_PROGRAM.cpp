//Program thar reads a positive integer n and prints the numbers from 1 to n 
//Using While 
#include<iostream>
using namespace std;
/*int main()
{
	int n, counter;
	cout<<"Please enter a positive integer"<<endl;
	cin>>n;
	counter = 1;
	while (counter <= n)
	{
		cout<<counter<<endl;
		counter += 1;
	}
	return 0;
}*/

//Using For
int main()
{
	int n;
	int counter;
	cout<<"Please enter a positive integer : "<<endl;
	cin>>n;
	counter = 1;
	for ( counter = 1;counter <= n;)
	{
		cout<<counter<<" ";	
		counter++;
	}
	return 0;
}

