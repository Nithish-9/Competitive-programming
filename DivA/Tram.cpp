/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int total = 0;
    int maxi = 0;
    for (int i = 0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if (i == 0)
        {
            total += b;
        }
        else if (i == n-1)
        {
            total -=b;
        }
        else
        {
            total -= a;
            total += b;
        }
        
        maxi = max(maxi,total);
        
    
    }
    
    cout<<maxi<<endl;

    return 0;
}
