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
            string* ptrName = &Name; 
            cout<<"Name: "<<endl;
            cin>>*ptrName; 
        }
        string getName() //getter
        {
            return Name;
        }

        void setCompany()
        {
            string* ptrCompany = &Company;
            cout<<"Company: "<<endl; 
            cin>>*ptrCompany;
        }
        string getCompany()
        {
            return Company;
        }

        void setAge()
        {
            int* ptrAge;
            cout<<"Age: "<<endl; 
            cin>>*ptrAge;
        }
        int getAge()
        {
            return Age; 
        }

        void setter()
        {
            setName();
            setCompany();
            setAge();
        }
};

int main()
{
    Employee employee1; 
    employee1.setter();
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old and works in "<<employee1.getCompany()<<endl; 

    Employee employee2;
    employee2.setter();
    cout<<employee2.getName()<<" is "<<employee2.getAge()<<" years old and works in "<<employee2.getCompany()<<endl;   
} 