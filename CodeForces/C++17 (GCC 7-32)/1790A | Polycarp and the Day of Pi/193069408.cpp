#include <bits/stdc++.h>
 
using namespace std;
void HossamFast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve(string s){
    string s2="314159265358979323846264338327";
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==s2[i])
            ans++;
        else
            break;
    }
    cout<<ans<<endl;
}
int main()
{
    HossamFast();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
}