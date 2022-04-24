#include<iostream>
#include<string> 
using namespace std;

class Employee
{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName() //setter
        {
            cout<<"Name: "<<endl;
            cin>>Name; 
        }
        string getName() //getter
        {
            return Name;
        }

        void setCompany()
        {
            cout<<"Company: "<<endl; 
            cin>>Company;
        }
        string getCompany()
        {
            return Company;
        }

        void setAge(int age)
        {
            Age = age;
        }
        int getAge()
        {
            return Age; 
        }

/*      void IntroduceYourself()
        {
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        } 
*/ 
};

int main()
{
    Employee employee1; 
    employee1.setName();
    employee1.setCompany(); 
    employee1.setAge(23);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old and works in "<<employee1.getCompany()<<endl;

    Employee employee2;
    employee2.setName();
    employee2.setCompany();
    employee2.setAge(33); 
    cout<<employee2.getName()<<" is "<<employee2.getAge()<<" years old and works in "<<employee2.getCompany()<<endl;
}