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
   
    int ans = 0;
    for (int i = 0;i<5;i++)
    {
        for (int j = 0;j<5;j++)
        {
            int val;
            cin>>val;
            if (val == 1)
            {
                ans = abs(i-2) + abs(j-2);
            }
        }
    }
    cout<<ans<<endl;
    
    

    return 0;
}
