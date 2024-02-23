/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int> &a,pair<int,int> &b)
{
    if (a.second == b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> a;
    for (int i = 0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    
    sort(a.begin(),a.end());
    
    bool flag = true;
    for (auto it : a)
    {
        if (s>it.first)
        {
            s += it.second;
        }
        else
        {
            flag = false;
            break;
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