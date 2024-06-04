#include<bits/stdc++.h>
 
using namespace std;
void solve(){
    long long n, sum = 0;
    cin >> n;
    while(n){
        sum += n;
        n/=2;
    }
    cout << sum << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}