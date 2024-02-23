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
    vector<int> a(n);
    for (int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    int total= 0;
    for (int val : a)
    {
        total += val;
    }
    
    int last = 0;
    int rem = 0;
    int ans = 0;
    for (int i = n-1;i>=0;i--)
    {
        last += a[i];
        rem = total - last;
        ans++;
        if (last>rem)
        {
            break;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}