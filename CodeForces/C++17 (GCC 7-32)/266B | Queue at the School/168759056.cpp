#include <iostream>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,t;
    string s;
    cin>>n>>t>>s;
    int j=0;
    for(int i=0;i<t;i++)
    {
       while(j<s.length())
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j+=2;
            }
            else
            {
            j++;
            }
        }
        j=0;
 
    }
    cout<<s<<endl;
    return 0;
}