/*Write a program that reads from the user a time entered in a 24 hr format , 
and prints the equivalent time in a 12 hr format*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int hour , minute;
	int newhour , newminute;
	string period;
	char temp;
	cout<<"Please enter the time in 24hr format: "<<endl;
	cin>>hour>>temp>>minute;
	temp = ':';
	if (hour >= 0 && hour <= 11)
	{
		period = " am";
	}
	else if(hour >= 12 && hour <= 23)
	{
		period = " pm";
	}
	if (hour == 0)
	{
		newhour = 12;
		newminute = minute;
	}
	else if (hour > 0 && hour < 12) 
	{
		newhour = hour;
		newminute = minute;
	}
	else if (hour == 12) 
	{
		newhour = 12;
		newminute = minute;
	}
	else if(hour > 12 && hour <= 23) 
	{
		newhour =  hour - 12;
		newminute = minute;
	}
	cout<<"The equivalent time of "<<hour<<temp<<minute<<" in 12 hour format is "<<newhour<<temp<<newminute<<period<<endl;
	return 0;
}



