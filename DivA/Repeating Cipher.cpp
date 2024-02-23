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
    string s;
    cin>>s;
    
    string ans = "";
    int i = 0;
    int len = 1;
    while (i<s.length())
    {
        ans += s[i];
        i += len;
        len++;
    }
    cout<<ans<<endl;
    return 0;
}
