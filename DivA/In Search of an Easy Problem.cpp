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
    bool check = true;
    for (int i = 0;i<n;i++)
    {
        int val;
        cin>>val;
        if (val == 1)
        {
            check = false;
        }
    }
    if (check)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }

    return 0;
}
