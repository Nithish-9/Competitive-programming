/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int n,int m,int a,int b)
{
    if (n<=0)
    {
        return 0;
    }
    
    int spl = spl = b + fun(n-m,m,a,b);
    
    int nspl = a + fun(n-1,m,a,b);
    
    return min(spl,nspl);
}

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if (m*a <= b)
    {
        cout<<n*a<<endl;
    }
    else
    {
        cout<<(n/m)*b + min((n%m)*a,b) <<endl;
    }
    return 0;
}