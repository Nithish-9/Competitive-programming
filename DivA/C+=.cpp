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
        int a,b,n;
        cin>>a>>b>>n;
        int count = 0;
        int turn;
        if (a>b)
        {
            turn = 1;
        }
        else
        {
            turn = 0;
        }
        while (a<=n && b<=n)
        {
            if (turn%2 == 0)
            {
                a+=b;
            }
            else
            {
                b+=a;
            }
            count++;
            turn++;
        }
        cout<<count<<endl;
    }
    return 0;
}