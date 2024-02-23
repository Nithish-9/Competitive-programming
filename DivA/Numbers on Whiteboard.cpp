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
        multiset<int> set;
        for (int i = 1;i<=n;i++)
        {
            set.insert(i);
        }
        
        vector<pair<int,int>> ans;
        
        
        for (int i = 0;i<n-1;i++)
        {
            auto it = set.end();
            it--;
            int a = *it;
            set.erase(it);
            
            
            it = set.end();
            it--;
            int b = *it;
            set.erase(it);
            
            set.insert((a+b+1)/2);
            ans.push_back({a,b});
            
        }
        
        auto it = set.end();
        it--;
        int final = *it;
        cout<<final<<endl;
        for (auto i : ans)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
        
    }

    return 0;
}
