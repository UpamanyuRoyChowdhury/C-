/*PATTERN PRINTING 
        *         
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * * 
  * * * * * * *   
    * * * * *     
      * * *
        *
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for (int j = i;j <5; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k<=2*i-1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1;j<=i;j++)
        {
            cout<<"  ";
        }
        for (int k = 2*i-1; k <= 7;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
   