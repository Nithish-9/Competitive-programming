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
    vector<pair<int,int>> teams;
    for (int i = 0;i<n;i++)
    {
        int h,g;
        cin>>h>>g;
        teams.push_back({h,g});
    }
    
   
    
    int ans = 0;
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            if (j != i)
            {
                if (teams[i].first == teams[j].second)
                {
                    ans++;
                }
            }
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
