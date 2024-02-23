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
    vector<int> arr(n+1);
    for (int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }
    
    vector<int> copy(n+1);
    for (int i = 1;i<=n;i++)
    {
        copy[arr[i]] = i;
    }
    
    for (int i = 1;i<=n;i++)
    {
        cout<<copy[i]<<" ";
    }
    cout<<endl;

    return 0;
}
