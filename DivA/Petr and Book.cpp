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
   int nop;
   cin>>nop;
   vector<int> arr(7);
   for (int i = 0;i<7;i++)
   {
      cin>>arr[i];
   }
   
   int sum = 0;
   
   int i = 0;
   
   while (nop>0)
   {
       nop -= arr[i];
       if (nop<=0)
       {
           break;
       }
      
       i = (i+1)%7;
   }
   
   cout<<(i+1)<<endl;

    return 0;
}
