//Struct
#include<iostream>
using namespace std;

typedef struct employee
{
	int ID;
	float SALARY;
}ep;

typedef union student
{
	int roll_number;
	char name[1024];
	int standard;
}stu;

void Employee1_data()
{
	struct employee Upamanyu;
	Upamanyu.ID = 01;
	Upamanyu.SALARY = 120000000;
	cout<<Upamanyu.ID<<endl;
	cout<<Upamanyu.SALARY<<endl;
}

void Employee2_data()
{
	ep Shubham;
	cout<<"Enter the details of Shubham"<<endl;
	cout<<"Enter the Employee ID of Shubham"<<endl;
	cin>>Shubham.ID;
	cout<<"Enter the Salary of Shubham"<<endl;
	cin>>Shubham.SALARY;
	cout<<Shubham.ID<<endl;
	cout<<Shubham.SALARY<<endl;
}
//Union 
void Student1_data()
{
	union student Student1;
	Student1.roll_number= 4979;
	cout<<"The roll Number of Student1 is "<< Student1.roll_number<<endl;
	Student1.name= 'UpamanyuRoyChowdhury'
	cout<<"The Full Name of Student1 is "<<Student1.name <<endl;
	Student1.standard = 12;
	cout<<"The class in which Student1 studies is "<<Student1.standard<<endl;	
}

void Student2_data()
{
	union student Student2;
	cout<<"Enter roll Number of Student2 :"<<endl;
	cin>>Student2.roll_number;
	cout<<"The roll Number of Student2 is "<<Student2.roll_number<<endl;
	cout<<"Enter full name of Student2 "<<endl;
	cin>>Student2.name;
	cout<<"The Full name of Student2 is "<<Student2.name<<endl;
	cout<<"Enter class in which Student2 studies "<<endl;
	cin>>Student2.standard;	
	cout<<"The class in which Student2 studies is "<<Student2.standard<<endl;
	cout<<"The roll Number of Student2 is "<<Student2.roll_number<<endl; //This will give Garbage values 
	cout<<"The Full name of Student2 is "<<Student2.name<<endl; //This will give Garbage values
	cout<<"The class in which Student2 studies is "<<Student2.standard<<endl;	
}
//Enum
void Food()
{
	enum Meal{Breakfast , Lunch , Dinner};
	cout<<Breakfast<<endl;
	cout<<Lunch<<endl;
	cout<<Dinner<<endl;
}

int main()
{
	Employee1_data();
	Employee2_data();
	Food();
	Student1_data();
	Student2_data();
}
