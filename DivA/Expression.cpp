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
    
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = a+b+c;
    maxi = max(maxi,a*(b+c));
    maxi = max(maxi,a*b*c);
    maxi = max(maxi,(a+b)*c);

    
    cout<<maxi<<endl;
    return 0;
}
