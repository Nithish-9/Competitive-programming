/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int start = -1;
        int end = -1;
        int count = 0;
        for (int i = 0;i<s.length();i++)
        {
            if (s[i] == '1')
            {
                if (start==-1)
                {
                    start = i;
                }
                count++;
                end = i;
            }
        }
        int ans = 0;
        if (count != 0)
        {
            ans = end-start+1 -count;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}
