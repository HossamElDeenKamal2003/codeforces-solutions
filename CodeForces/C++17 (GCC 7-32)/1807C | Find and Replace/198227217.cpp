#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    map<char, int>mp;
    mp[str[0]] = 0;
    int flag = 1;
    for(int i = 1; i < n; i++){
        if(mp.find(str[i]) != mp.end()){
            if(mp[str[i - 1]] == mp[str[i]]){
                flag = 0;
                break;
            }
        }
        else{
            if(mp[str[i-1]] == 0)
                mp[str[i]] = 1;
            else
                mp[str[i]] = 0;
        }
    }
    if(flag == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
void HossamFast(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
}
int main(){
    HossamFast();
    long long t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}