/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0;i<n;i++)
    {
        string s;
        cin>>s;
        
        if (s.length()>10)
        {
            int val = s.length()-2;
            string ans = s.front() + to_string(val) + s.back();
            cout<<ans<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}