#include<iostream>
#include<string> 
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee
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

        void AskForPromotion()
        {
            if (Age> 30)
            {
                cout<<Name<<" Got promoted "<<endl;
            }
            else 
            {
                cout<<Name<<" No promotion for you "<<endl;
            }
        }
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

    employee1.AskForPromotion();
    employee2.AskForPromotion();
} 