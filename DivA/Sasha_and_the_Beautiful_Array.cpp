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
        vector<int> arr(n);
        for (int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        sort(arr.begin(),arr.end());
        
        int ans = 0;
        for (int i = 1;i<n;i++)
        {
            ans += arr[i]-arr[i-1];
        }
        cout<<ans<<endl;
    }

    return 0;
}
