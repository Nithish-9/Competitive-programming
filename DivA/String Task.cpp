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
    string s;
    getline(cin,s);
    
    unordered_set<char> set={'a','o','y','e','u','i','A','O','Y','E','U','I'};
    string ans = "";
    for (char ch : s)
    {
       
        if (set.find(ch) == set.end())
        {
            ch = tolower(ch);
            ans = ans + '.' +ch;
        }
    }
    
    cout<<ans<<endl;
    

    return 0;
}
