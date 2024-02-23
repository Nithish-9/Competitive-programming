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
    int n,m;
    cin>>n>>m;
    vector<string> ans(n);
    string hash = "";
    string dot = "";
    for (int i = 0;i<m;i++)
    {
        hash += '#';
        dot += '.';
    }
    
    int sign = 1;
    for (int i = 0;i<n;i++)
    {
        if (i%2 == 0) //even
        {
            ans[i] = hash;
        }
        else
        {
            //odd
            ans[i] = dot;
            if (sign == 1)
            {
                ans[i][m-1] = '#';
                
            }
            else
            {
                ans[i][0] = '#';
                
               
            }
            sign = sign*(-1);
        }
    }
    
    for (string str : ans)
    {
        cout<<str<<endl;
    }
    
    

    return 0;
}
