/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int i,int j,vector<vector<int>> &dp,vector<vector<char>> &grid)
{
    int n=grid.size();
    int m = grid[0].size();
    if (i == n-1 && j == m-1)
    {
        return 0;
    }
    
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    
    int right = 0;
    if (grid[i][j] == 'R')
    {
        if (j+1<m)
        {
            right = fun(i,j+1,dp,grid);
        }
        else
        {
            //change to down
            right = 1 + fun(i+1,j,dp,grid);
        }
    }
    
    int down = 0;
    if (grid[i][j] == 'D')
    {
        if (i+1<n)
        {
            down = fun(i+1,j,dp,grid);
        }
        else
        {
            //change to right
            down = 1 + fun(i,j+1,dp,grid);
        }
    }
    
    return min(down,right);
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int ans = 0;
        
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
            {
                char ch;
                cin>>ch;
                if (j == m-1 && ch == 'R')
                {
                    ans++;
                }
                
                if (i == n-1 && ch == 'D')
                {
                    ans++;
                }
            }
        }
        
        
        
        cout<<ans<<endl;
    }
    

    return 0;
}
