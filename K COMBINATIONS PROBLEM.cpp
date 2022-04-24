#include<iostream>
using namespace std;
int main()
{
	int n,k,i , nfact,kfact, nkfact, kcomb;
	cout<<"Please enter the values of n , k ,i"<<endl;
	cin>>n>>k;
	if (k>n)
	{
		cout<<"The value of k has to be smaller than the value of n"<<endl;
	}
	else
	{
		nfact = 1;
		for( i = 1; i <= n; i++ )
		{
			nfact *= i;
		}
		
		kfact = 1;
		for ( i = 1; i <= k; i++ )
		{
			kfact *= i;
		}
		
		nkfact = 1;
		for ( i = 1 ; i <= n - k ; i++)
		{
			nkfact *= i;
		}
	}
	
	kcomb = nfact/(kfact * nkfact) ; 
	cout<<n<<" choose "<<k<<" is "<<kcomb<<endl;
	return 0;
}
