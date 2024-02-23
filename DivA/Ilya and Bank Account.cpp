/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    if (n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        n = (-1) * n;
        string s = to_string(n);
        string s1 = s.substr(0,s.length()-1);
        string s2 = s.substr(0,s.length()-2) + s.back();
        
        int num1 = 0,num2 = 0;
        for (int i = 0;i<s1.length();i++)
        {
            num1 = num1 * 10 + (s1[i]-'0');
        }
        
        for (int i = 0;i<s2.length();i++)
        {
            num2 = num2 * 10 + (s2[i]-'0');
        }
        
        
        
        num1 = (-1) * num1;
        num2 = (-1) * num2;
        int maxi = max(num1,num2);
        cout<<maxi<<endl;
        
        
    }
    
    
    
    return 0;
}