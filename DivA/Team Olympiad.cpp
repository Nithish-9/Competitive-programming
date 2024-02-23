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
    unordered_map<int,unordered_set<int>> hash;
    for (int i = 0;i<n;i++)
    {
        hash[a[i]].insert(i);
    }
    
    if (hash.size()==3)
    {
        int mini = n+1;
        for (auto it : hash)
        {
            mini = min(mini,(int)it.second.size());
        }
        
        cout<<mini<<endl;
        for (int i = 0;i<mini;i++)
        {
            auto it = hash[1].begin();
            int a = *it;
            hash[1].erase(it);
            
            it = hash[2].begin();
            int b = *it;
            hash[2].erase(it);
            
            it = hash[3].begin();
            int c = *it;
            hash[3].erase(it);
            
            cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
            
        }
    }
    else
    {
        cout<<0<<endl;
    }
    
    return 0;
}
