/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int co,ce,lo,le;
    for (int i = 0;i<n;i++)
    {
        int a;
        cin>>a;
        if (a%2 == 0)
        {
            ce++;
            le = i+1;
        }
        else
        {
            co++;
            lo=i+1;
        }
    }
    
    if (ce == 1)
    {
        cout<<le<<endl;
    }
    else
    {
        cout<<lo<<endl;
    }
    
    return 0;
}
