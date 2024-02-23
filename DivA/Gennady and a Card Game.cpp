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
    string table;
    cin>>table;
    bool play = false;
    for (int i = 0;i<5;i++)
    {
        string str;
        cin>>str;
        if (str[0] == table[0] || str[1] == table[1])
        {
            play = true;
            break;
        }
    }
    
    if (play)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}