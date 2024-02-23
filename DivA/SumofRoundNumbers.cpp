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
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        int count = 0;
        while (n != 0)
        {
            int digit = n%10;
            arr.push_back(digit);
            if (digit == 0)
            {
                count++;
            }
            n=n/10;
        }
        
        int k = arr.size()-count;
        cout<<k<<endl; //minimum addends;
        
        int sum =1;
        for (int val : arr)
        {
            if (val != 0)
            {
                cout<<val*sum<<" ";
            }
            sum = sum*10;
        }
        cout<<endl;
        
        
        
    }
    
    

    return 0;
}
