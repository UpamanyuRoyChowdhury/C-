//Program that reads the grades of students in class and printts thhe average
#include<iostream>
using namespace std;
int main()
{
	double students,counter,marks, totalmarks;
	double average;
	cout<<"Enter the number of students in the class"<<endl;
	cin>>students;
	counter = 1;
	totalmarks = 0;
	while(students >= counter)
	{
		cout<<"The marks of Student"<<counter<<" is "<<endl;
		cin>>marks;
		totalmarks += marks;
		counter += 1;
	}
	average = totalmarks/students;
	cout<<"The average of the grades of the students in the class is "<<average<<endl;
	return 0;
}


