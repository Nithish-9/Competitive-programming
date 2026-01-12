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
    
    string recipe;
    cout<<"Hello";
    cin>>recipe;
    
    long long nb,ns,nc;
    cin>>nb>>ns>>nc;
    long long pb,ps,pc;
    
    cin>>pb>>ps>>pc;
    long long amount;
    cin>>amount;
    
    long long ab = 0,as=0,ac=0;
    for (char c : recipe)
    {
        
        if (c == 'B')
        {
            ab++;
        }
        else if (c=='S')
        {
            as++;
        }
        else
        {
            ac++;
        }
    }
    
   
    
    
    long long low = 0;
    long long high = amount+200;

    while (low<=high)
    {
        long long mid = low + (high-low)/2;
        long long z = 0;
       long long rb = max((mid*ab)-nb,z);
       long long rs = max((mid*as)-ns,z);
       long long rc = max((mid*ac)-nc,z);
       
      
    
       
       long long total = rb*pb+rs*ps+rc*pc;
        
        if (total<=amount)
        {
            
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    
    cout<<high<<endl;
    return 0;
}
