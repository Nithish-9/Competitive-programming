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
    long long n,k;
    cin>>n>>k;
    
    long long odd,even;
    odd = (n+1)/2;
    even = n/2;
    
    if (k<=odd)
    {
        cout<<(2*k)-1<<endl;
    }
    else
    {
        cout<<(k-odd)*2<<endl;
    }
    return 0;
}