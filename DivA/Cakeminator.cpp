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
    int r,c;
    cin>>r>>c;
    vector<vector<char>> mat(r,vector<char>(c));
    for (int i =0;i<r;i++)
    {
        for (int j = 0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    int ans = 0;
    unordered_set<int> set;
    for (int i = 0;i<r;i++)
    {
        bool evil = false;
        for (int j = 0;j<c;j++)
        {
            if (mat[i][j] == 'S')
            {
                evil = true;
                break;
            }
        }
        if (evil  == false)
        {
            ans += c;
            set.insert(i);
        }
    }
    
    for (int j = 0;j<c;j++)
    {
        bool evil = false;
        int chosen = 0;
        for (int i = 0;i<r;i++)
        {
            if (mat[i][j] == 'S')
            {
                evil = true;
                break;
            }
            
            if (set.find(i) != set.end())
            {
                chosen++;
            }
        }
        
        if (evil  == false)
        {
            ans += r-chosen;
            
        }
        
    }
    
    cout<<ans<<endl;
    

    return 0;
}
