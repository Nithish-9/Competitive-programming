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
    
    int s1=0,s2=0,s3=0;
    for (int i = 0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        s1+=a;
        s2+=b;
        s3+=c;
    }
    
    if (s1 ==0 && s2 ==0 && s3 == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
