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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for (int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr.begin(),arr.end());
    int count = 0;
    int i = 0;
    while (i<n)
    {
        if (i+2<n)
        {
            if (5-arr[i+2]>=k)
            {
                count++;
                
            }
            
            i += 3;
        }
        else
        {
            break;
        }
    }
    
    cout<<count<<endl;
    

    return 0;
}
