/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
   
    while (k--)
    {
        int digit = n%10;
        if (digit == 0)
        {
            n = n/10;
        }
        else
        {
            n = n-1;
        }
    }
    
    cout<<n<<endl;

    return 0;
}
