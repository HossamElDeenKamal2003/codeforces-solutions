#include <bits/stdc++.h>
 
using namespace std;
void solve(){
        string s1, s2;
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        string s3 = s1 + s2;
        cout << s3 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}