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
    int h = 1;
   
    while (true)
    {
    
        n -= (h*(h+1))/2;
        if (n>=0)
        {
            h++;
        }
        else
        {
            break;
        }
        
    }
    
    cout<<h-1<<endl;
    return 0;
}