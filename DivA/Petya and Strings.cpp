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
    string a,b;
    cin>>a>>b;
    int cnt = 0;
    for (int i = 0;i<a.length();i++)
    {
        if (tolower(a[i])>tolower(b[i]))
        {
            cout<<"1"<<endl;
            break;
        }
        else if (tolower(a[i])<tolower(b[i]))
        {
            cout<<"-1"<<endl;
            break;
        }
        else
        {
            cnt++;
        }
    }
    if (cnt == a.length())
    {
        cout<<"0"<<endl;
    
    }
    return 0;
}