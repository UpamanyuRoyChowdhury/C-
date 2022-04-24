#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int j = i;j <=5; j++)
            {
                cout<<" ";
            }
            for (int k = 1; k<=i; k++)
            {
                cout<<"* ";
            }
        };
        if (i > 5 && i <= 9)
        {
            for (int j = 6;j <= i; j++)
            {
                cout<<" ";
            }
            for (int k = i; k<=9; k++)
            {
                cout<<" *";
            }
        };
        cout<<endl;
    }
}