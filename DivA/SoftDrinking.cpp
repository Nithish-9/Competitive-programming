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
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int drinks = (k*l)/nl;
    int slices = (c*d);
    int salt = p/np;
    int total = min({drinks,slices,salt});
    cout<<total/n<<endl;
    
    

    return 0;
}
