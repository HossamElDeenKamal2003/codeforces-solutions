#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
void solve() {
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
 