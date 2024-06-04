#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    int a1[51], a2[51];
    for(int i = 0; i < n; i++){
        cin >> a1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> a2[i];
    }
    sort(a2, a2+n);
    reverse(a2, a2+n);
    int sum = 0;
    bool flag = false;
    for(int i = 0; i < n; i++){
        sum += (a1[i] + a2[i]);
        if(sum > k){
            cout << "NO" << endl;
            return;
        }
        sum = 0;
    }
    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}