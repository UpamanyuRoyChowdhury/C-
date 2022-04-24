//Computing value of a siple expression and printimg its value
#include<iostream>
using namespace std;
int main()
{
	double arg1 , arg2 , result;
	char op;
	cout<<"Please enter an expression of the form arg1 op arg2: "<<endl;
	cin>>arg1>>op>>arg2;
	
	switch(op)
	{
		case '+':
			result = arg1 + arg2;
			cout<<result<<endl;
			break;
		case '-':
			result = arg1 - arg2;
			cout<<result<<endl;
			break;
		case '/':
			if (arg2 == 0)
			{
				cout<<"Illegal Expression : Denominator cannot be zero"<<endl;
			}
			else
			{
				result = arg1 / arg2;
				cout<<result<<endl;
			}
			
			break;
		case '*':
			result = arg1*arg2;
			cout<<result<<endl;
			break;
		default:
			cout<<"Illegal expression"<<endl;
			break;
	}
	return 0;
}



