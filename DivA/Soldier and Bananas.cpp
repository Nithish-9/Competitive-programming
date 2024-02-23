/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n,k,w;
    cin>>k>>n>>w;
   
    int sum = 0;
    for (int i =1;i<=w;i++)
    {
        sum += i*k;
    }
    
  
    int borrow = sum-n;
    if (borrow<=0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<borrow<<endl;
    }

    return 0;
}
