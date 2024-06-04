#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
/*void solve() {
 string s;
 cin >> s;
 transform(s.begin(), s.end(), s.begin(), ::toupper);
 if (s == "YES")
  cout << "YES\n";
 else
  cout << "NO\n";
}
int main()
{
 int t;
 cin >> t;
 while (t--)
  solve();
}
*/
/*void solve() {
 int n;
 cin >> n;
 string s;
 cin >> s;
 int ctr = 0;
 sort(s.begin(), s.end());
 for (int i = 0; i < s.length(); i++) {
  if (s[i] == s[i + 1]) {
   ctr += 3;
   i++;
  }
  else {
   ctr += 2;
  }
 }
 cout << ctr << '\n';
}*/
void solve() {
 long long n;
 cin >> n;
 string s;
 cin >> s;
 long long ans = 0;
 map<char, long long> mp;
 for (char c : s) {
  if (mp.count(c)) {
   ans += 1;
  }
  else {
   ans += 2;
   mp[c] += 1;
  }
 }
 cout << ans << endl;
}
int main() 
{
 int t;
 cin >> t;
 while (t--)
  solve();
}
 