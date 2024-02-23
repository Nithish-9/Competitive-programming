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
    vector<int> dist(3);
    for (int i = 0;i<3;i++)
    {
        cin>>dist[i];
    }
    sort(dist.begin(),dist.end());
    
    int ans = dist[1]-dist[0] + dist[2]-dist[1];
    cout<<ans<<endl;
    
    

    return 0;
}
