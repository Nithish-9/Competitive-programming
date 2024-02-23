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
    string word;
    getline(cin,word);
    
    vector<int> a;
    for (char c : word)
    {
        if (c !='+')
        {
            a.push_back(c-'0');
        }
    }
    
    sort(a.begin(),a.end());
    string ans = "";
    for (int val : a){
        ans += to_string(val) + '+';
    }
    ans.erase(ans.begin()+ans.length()-1);
    cout<<ans<<endl;
    return 0;
}
