#include <bits/stdc++.h>
 
using namespace std;
void solve()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    if(s[0]!='m'&&s[0]!='M'||s[s.size()-1]!='W'&&s[s.size()-1]!='w'){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<x-1;i++){
        if(s[i]!=s[i+1]){
 
           if((s[i]=='m'||s[i]=='M')&&(s[i+1]=='e' ||s[i+1]=='E'))continue;
         else if( (s[i]=='e'||s[i]=='E')&&(s[i+1]=='O'||s[i+1]=='o'))continue;
         else if( (s[i]=='o'||s[i]=='O')&&(s[i+1]=='W'||s[i+1]=='w'))continue;
         else if( (s[i]=='M'||s[i]=='m')&&(s[i+1]=='m'||s[i+1]=='M'))continue;
         else if( (s[i]=='e'||s[i]=='E')&&(s[i+1]=='e'||s[i+1]=='E'))continue;
         else if( (s[i]=='O'||s[i]=='o')&&(s[i+1]=='O'||s[i+1]=='o'))continue;
         else if( (s[i]=='w'||s[i]=='W')&&(s[i+1]=='w'||s[i+1]=='W'))continue;
         else{
            cout<<"NO"<<endl;
            return;
        }
     }
    }
    cout<<"YES"<<endl;
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}