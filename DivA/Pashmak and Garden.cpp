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
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    

    bool flag = true;
    if (x1 == x2)
    {
        int d = abs(y1-y2);
        y3 = y1;
        y4 = y2;
        x3 = x1 + d;
        x4 = x2 + d;
    }
    else if (y1 == y2)
    {
        int d = abs(x1-x2);
        x3 = x1;
        x4 = x2;
        y3 = y1 + d;
        y4 = y2 + d;
    }
    else
    {
        int a = abs(x1-x2);
        int b = abs(y1-y2);
        if (a != b)
        {
            flag = false;
        }
        else
        {
            x3 = x2;
            y4 = y2;
            y3 = y1;
            x4 = x1;
        }
    }
    
    if (flag)
    {
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    return 0;
}