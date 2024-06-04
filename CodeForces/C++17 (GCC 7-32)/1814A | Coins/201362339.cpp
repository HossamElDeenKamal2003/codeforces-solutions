#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    long long int k, n;
    cin >> k >> n;
    if(k % 2 != 0 && n % 2 ==0)
        cout <<"NO\n";
    else
        cout << "YES \n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}