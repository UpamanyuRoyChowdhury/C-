#include<iostream>
#include<string> 
using namespace std;
class Employee
{
    public:
        string Name;
        string Company;
        int Age;
        
        void IntroduceYourself()
        {
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        Employee(string name, string company, int age)//Constructor
        {
            Name = name;
            Company = company;
            Age = age; 
        }
};

int main()
{ 
/*   
    Employee employee1;
    employee1.Name = "Upamanyu";
    employee1.Company = "Grofers";
    employee1.Age = 20;
*/
    Employee employee1 = Employee("Upamanyu", "Grofers", 20);
    employee1.IntroduceYourself();
/*   
    Employee employee2;
    employee2.Name = "Nix";
    employee2.Company = "Paytm";
    employee2.Age = 25;
*/
    Employee employee2 = Employee("Nix", "Paytm", 25);
    employee2.IntroduceYourself();
}
