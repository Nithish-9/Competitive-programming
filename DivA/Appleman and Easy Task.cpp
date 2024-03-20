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
    bool flag = true;
    cin>>n;
    vector<vector<char>> board(n,vector<char>(n));
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            cin>>board[i][j];
        }
    }
    
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            
                int count = 0;
                if (i+1<n && board[i+1][j] == 'o')
                {
                    count++;
                }
                if (i-1>=0 && board[i-1][j] == 'o')
                {
                    count++;
                }
                if (j+1<n && board[i][j+1] == 'o')
                {
                    count++;
                }
                if (j-1>=0 && board[i][j-1] == 'o')
                {
                    count++;
                }
                
                if (count%2 != 0)
                {
                    flag = false;
                    break;
                }
                
                
            
        }
        if (flag == false)
        {
            break;
        }
    }
    
   
    if (flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
