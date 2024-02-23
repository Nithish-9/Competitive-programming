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
        int digit=0,len=0,ans=0;
        while (n!= 0)
        {
            digit = n%10;
            len++;
            n = n/10;
        }
        
        ans += (digit-1)*10 + (len*(len+1))/2;
        cout<<ans<<endl;
        
    }
    return 0;
}