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
    int p,v;
    cin>>p>>v;
    vector<int> ans;

    for (int i = 1;i<=p;i++)
    {
        int n;
        cin>>n;
        bool isPossible = false;
        for (int j = 0;j<n;j++)
        {
            int price;
            cin>>price;
            
            if (!isPossible && v>price)
            {
                ans.push_back(i);
                isPossible = true;
            }
        }
       
        
    }
    
    cout<<ans.size()<<endl;
    for (int val : ans)
    {
        cout<<val<<" ";
    }
    

    return 0;
}
