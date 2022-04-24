#include<iostream>
using namespace std;
int analyzedigits(int num, int &outsum);
int main()
{
	int num, countdigs , sumdigs;
	cout<<"Please enter positive integer"<<endl;
	cin>>num;
	sumdigs = 0;
	countdigs = analyzedigits(num , sumdigs);
	cout<<num<<" has "<<countdigs<<" digits and their sum is "<<sumdigs<<endl;
	return 0;
}

int analyzedigits(int num, int &outsum)
{
	int i,count,sum;
	count = 0;
	sum = 0;
	while ( num > 0) 
	{
		i = num%10;
		sum = sum + i;
		num = num / 10;
		count += 1;
	}
	outsum = sum;
	return count;	
}




