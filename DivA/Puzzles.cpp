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
    
    vector<int> a(m);
    for (int i = 0;i<m;i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    int i = 0;
    int mini = 1e9;
    while (i+n-1<m)
    {
        mini = min(mini,a[i+n-1]-a[i]);
        i++;
    }
    cout<<mini<<endl;
    
    return 0;
}
