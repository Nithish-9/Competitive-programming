/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool islucky(int n)
{
    string s = to_string(n);
    
    for (char c : s)
    {
        if (c != '4' && c != '7')
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int n;
    cin>>n;
    
    bool flag = false;
    for (int i = 1;i<=n;i++)
    {
        if (islucky(i))
        {
            if (n%i == 0)
            {
                
               flag = true;
               break;
            }
        }
    }
    
    if (flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}