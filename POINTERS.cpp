//Pointers 
#include<iostream>
using namespace std;
int main()
{
	int p = 5;
	double q = 6.56;
	float r = 7.73;
	char s = 'c';
	
	int *ip = &p;
	double *dp;
	float *fp;
	char *cp;
	
	//Storing addresses of variables in pointters
//	ip = &p;
	dp = &q;
	fp = &r;
	cp = &s;
	
	cout<<"variable value "<<p<<endl;
	cout<<"Address in Pointer "<<ip<<endl;
	cout<<"Pointer pointing to value "<<*ip<<endl;
	cout<<endl;
	
	cout<<"variable value "<<q<<endl;
	cout<<"Address in Pointer "<<dp<<endl;
	cout<<"Pointer pointing to value "<<*dp<<endl;
	cout<<endl;
	
	cout<<"variable value "<<r<<endl;
	cout<<"Address in Pointer "<<fp<<endl;
	cout<<"Pointer pointing to value "<<*fp<<endl;
	cout<<endl;
	
	cout<<"variable value "<<s<<endl;
	cout<<"Address in Pointer "<<cp<<endl;
	cout<<"Pointer pointing to value "<<*cp<<endl;
	cout<<endl;
	
	//Changing values using pointers
	*ip = 7; 
	*dp = 10.77;
	*fp = 12.34;
	*cp = 'x';
	
	cout<<"Pointer pointing to value "<<*ip<<endl;
	cout<<endl;
	
	cout<<"Pointer pointing to value "<<*dp<<endl;
	cout<<endl;
	
	cout<<"Pointer pointing to value "<<*fp<<endl;
	cout<<endl;
	
	cout<<"Pointer pointing to value "<<*cp<<endl;
	cout<<endl;
	
	return 0;	
}


