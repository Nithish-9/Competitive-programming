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
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(2*n);
        for (int i = 0;i<2*n;i++)
        {
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        cout<<a[n]-a[n-1]<<endl;
    }
    

    return 0;
}
