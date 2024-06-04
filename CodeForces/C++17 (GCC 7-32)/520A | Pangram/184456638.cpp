#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int n,ctr=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0; i<n; i++)
    {
        str[i]=towlower(str[i]);
    }
    sort(str.begin(),str.end());
    for(int i=0; i<n; i++)
    {
        if(str[i]!=str[i+1])
        {
            ctr++;
        }
    }
    if(ctr==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
    return 0;
}