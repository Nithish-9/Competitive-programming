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
    
    word[0] = toupper(word[0]);
    cout<<word<<endl;
    return 0;
}
