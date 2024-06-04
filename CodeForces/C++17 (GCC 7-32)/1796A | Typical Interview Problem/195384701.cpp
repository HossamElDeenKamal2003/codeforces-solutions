#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    string s = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    int n;
    cin >> n;
    string k ;
    cin >> k;
    if(s.find(k)!=string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
 