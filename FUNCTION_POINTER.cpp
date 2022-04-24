#include<iostream>
using namespace std;

int getnumber()
{
    return 5;
}

int add(int a , int b)
{
    return a+b ;
}

int main()
{
    int(*funcptr)() = getnumber;
    cout<<funcptr()<<endl;
    int(*addfuncptr)(int , int) = add;
    cout<<add(2,3)<<endl;
    cout<<addfuncptr(3,4)<<endl;
    return 0; 
}
