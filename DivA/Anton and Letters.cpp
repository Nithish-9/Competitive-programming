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
    unordered_set<char> set;
    for (char c : s)
    {
        if (isalpha(c))
        {
            set.insert(c);
        }
    }
    cout<<set.size()<<endl;
    return 0;
}
