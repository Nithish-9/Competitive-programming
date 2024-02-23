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
    vector<int> a(n);
    for (int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int maxi = 1;
    int count = 1;
    for (int i = 1;i<n;i++)
    {
        if (a[i-1]<a[i])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxi = max(maxi,count);
    }
    cout<<maxi<<endl;
    return 0;
}