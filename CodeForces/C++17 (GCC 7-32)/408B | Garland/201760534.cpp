#include <bits/stdc++.h>
 
using namespace std;
int solve() {
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> m1;
    map<char, int> m2;
    for (auto i : s1)m1[i]++;
    for (auto i : s2)m2[i]++;
    int ans = 0;
    for (auto i : m2) {
        if (m1[i.first] == 0) {
            cout << -1 << endl;
            return 0;
        }
        ans += min(m1[i.first], i.second);
    }
    cout << ans << endl;
}
int main()
{
    solve();
}
 
// aaabbac    s     a:4 b:2 c:1
// aabbccac   t     a:3 b:2 c:3
              //     3  + 2 + 1 = 6