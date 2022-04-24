#include<iostream>
#include<string>
using namespace std;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee 
{
    private://Attributes in private access Modifier doesnt allow the derived class to access them
        string Organisation;
    protected://Protected access Modifier allows the attributes to be available to derived classes
        string Name;
        int Age;
    public:
        Employee(string name, string organisation)
        {
            Name = name;
            Organisation = organisation;
        }

        void setName(string name)
        {
            Name = name;
        } 
        string getName()
        {
            return Name;
        }

        void setOrg(string organisation)
        {
            Organisation = organisation;
        }
        string getOrg() 
        {
            return Organisation;
        }

        void setAge()
        {
            int* ptrAge = &Age;
            cout<<"Enter age:"<<endl;
            cin>>*ptrAge;
        }

        void IntroduceYourself()
        {
            cout<<Name<<" works in "<<Organisation<<" and is "<<Age<<" Years old"<<endl;
        }

        void AskForPromotion()
        {
            if(Age<30)
            {
                cout<<Name<<" No promotion for you"<<endl;
            }
            else if(Age>30)
            {
                cout<<Name<<" Promoted"<<endl;
            }
        }
};

//Derived classes has to be public in order to access the public methods 
class Teacher :public Employee 
{
    public:
        string Subject;
        Teacher(string name, string organisation,  string subject) : Employee(name, organisation)
        {
            Subject = subject;
        }
        void Lesson()
        {
            cout<<Name<<" teaches the subject "<<Subject<<" and is "<<Age<<" years old "<<endl;
        } 
};

//Derived classes has to be public in order to access the public methods 
class Developer : public Employee 
{
    public:
        string FavProgrammingLanguage;
        Developer(string name, string organisation , int age, string favProgrammingLanguage):Employee(name,organisation)
        {
            Age = age;
            FavProgrammingLanguage = favProgrammingLanguage;
        };
        void FixBug()
        {
            cout<<Name<<" fixed the bug using "<<FavProgrammingLanguage<<endl;
        }
};

int main()
{
    Employee employee1 = Employee("Upamanyu", "Cognizant");
    employee1.setAge();
    employee1.IntroduceYourself();
    employee1.AskForPromotion();
    cout<<endl;
//Derived classes has to be public in order to access the public methods 
    Teacher teacher1 = Teacher("Rahul","CR Oasis","Geography");
    teacher1.setAge();
    teacher1.IntroduceYourself();
    teacher1.Lesson();
    teacher1.AskForPromotion();
    cout<<endl;

    Developer developer1 = Developer("Arkachur", "Amazon", 23, "C++");
    developer1.IntroduceYourself();
    developer1.FixBug();
    developer1.AskForPromotion();
    cout<<endl; 
}
