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
    vector<int> arr(n,0);
    int p;
    cin>>p;
    for (int i = 0;i<p;i++)
    {
        int val;
        cin>>val;
        arr[val-1] = 1;
    }
    
    int q;
    cin>>q;
    for (int i = 0;i<q;i++)
    {
        int val;
        cin>>val;
        arr[val-1] = 1;
    }
    
    
    bool flag = true;
    for (int i = 0;i<n;i++)
    {
        if (arr[i] == 0)
        {
            flag = false;
            break;
        }
    }
    
    if (flag)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}