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
    int n,m;
    cin>>n>>m;
    
    if (min(n,m)%2 == 1)
    {
        //odd
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }
    return 0;
}
