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
    vector<int> arr(n);
    int maxi = -1e9;
    int mini = 1e9;
    int si = 0;
    int li = 0;
    for (int i = 0;i<n;i++)
    {
        cin>>arr[i];
        maxi = max(maxi,arr[i]);
        mini = min(mini,arr[i]);
    }
    
    for (int i = 0;i<n;i++)
    {
        if (maxi == arr[i])
        {
            li = i;
            break;
        }
    }
    
    for (int i = n-1;i>=0;i--)
    {
        if (mini == arr[i])
        {
            si = i;
            break;
        }
    }
    
        
   
    
    int ans = 0;
    if (si<li)
    {
        ans += li-1+(n-1-si);
    }
    else
    {
        ans += li + (n-1-si);
    }
    
    cout<<ans<<endl;

    return 0;
}
