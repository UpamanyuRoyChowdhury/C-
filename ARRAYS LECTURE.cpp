 #include<iostream>
 using namespace std;
 
 const int MAX_CLASS_SIZE = 60;
 int main()
 {
 	int numofstudents, i,j,k, sum, currgrade;
 	double avg;
 	int gradeslist[MAX_CLASS_SIZE];
 	cout<<"Please enter the number of students"<<endl;
 	cin>>numofstudents;
 	cout<<"Enter the grades received by each student"<<endl;
 	for(i=0; i < numofstudents; i++ )
 	{
 		cin>>currgrade;
 		gradeslist[i] = currgrade;
	}
	sum = 0;
	for (j = 0; j<numofstudents; j ++)
	{
		sum = sum + gradeslist[j];
	}
	cout<<"The sum of grades are "<<sum<<endl;
	avg = double(sum / numofstudents);
	cout<<"The average grade of the students are:"<<endl;
	cout<<avg<<endl;
	cout<<"The grades greater than average grade are:"<<endl;
	for (k =0; k < numofstudents; k++ )
	{
		if (gradeslist[k]>avg)
		{
			cout<<gradeslist[k]<<endl;
		}
	} 
 }
 
 
 
 
