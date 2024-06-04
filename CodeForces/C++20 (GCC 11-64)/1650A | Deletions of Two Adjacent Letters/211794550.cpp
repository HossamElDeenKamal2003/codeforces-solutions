#include <bits/stdc++.h>
#define ll long long
using namespace std;
// fast cout and cin function
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 
void solve(){
    int x;
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[0]&&i%2==0&&(s1.size()-i-1)%2==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    HossamFast();
    int t;
    cin >> t;
    while(t--)
        solve();
}