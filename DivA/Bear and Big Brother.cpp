/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int year = 0;
    while (a<=b)
    {
        a = a* 3;
        b = b*2;
        year++;
    }
    cout<<year<<endl;

    return 0;
}
