#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    unsigned int n,t;
    cin>>t;
    string str="Timur",str2;
    sort(str.begin(),str.end());
    for(int i=0;i<t;i++){
    cin>>n;
    cin>>str2;
    sort(str2.begin(),str2.end());
    if(str==str2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
    return 0;
}