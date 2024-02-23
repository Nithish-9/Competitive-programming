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
   int k;
   cin>>k;
   string s;
   cin>>s;
   unordered_map<char,int> hash;
   
   for (char c : s)
   {
       hash[c]++;
   }
   
   string ans = "";
   bool ispossible = true;
   for (auto it : hash)
   {
       if (it.second%k == 0)
       {
           for (int i = 0;i<it.second/k;i++)
           {
               ans = ans +  it.first;
           }
       }
       else
       {
           ispossible= false;
           break;
       }
   }
   
   if (ispossible)
   {
       string final = "";
       for (int i = 0;i<k;i++)
       {
           final += ans;
       }
       cout<<final<<endl;
   }
   else
   {
       cout<<"-1"<<endl;
   }

    return 0;
}
