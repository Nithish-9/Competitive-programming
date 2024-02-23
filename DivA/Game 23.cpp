/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int n,int m)
{
    if (n == m)
    {
        return 0;
    }
    
    if (n>m)
    {
        return 1e9;
    }
    
    return min(fun(n*2,m),fun(n*3,m)) + 1;
}

int main()
{
    int n,m;
    cin>>n>>m;
   
    int ans = fun(n,m);
    if (ans >= 1e9)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    return 0;
}
