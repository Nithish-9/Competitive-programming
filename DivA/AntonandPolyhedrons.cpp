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
    unordered_map<string,int> hash;
    hash["Tetrahedron"] = 4;
    hash["Cube"] = 6;
    hash["Octahedron"] = 8;
    hash["Dodecahedron"] = 12;
    hash["Icosahedron"] = 20;
    
    int n;
    cin>>n;
    int ans = 0;
    while (n--)
    {
        string temp;
        cin>>temp;
        ans += hash[temp];
    }
    cout<<ans<<endl;

    return 0;
}
