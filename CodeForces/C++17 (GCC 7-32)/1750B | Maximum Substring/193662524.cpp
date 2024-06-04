#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--) {
  long long n;
  cin >> n;
  string s;
  cin >> s;
  long long x = 0, y = 0, p = 0, q = 0, a = 0, b = 0;
  for (int i = 0; i < n; i++) {
   if (s[i] == '0')
    x++, a++, b = 0;
   if (s[i] == '1')
    y++, b++, a = 0;
   p = max(p, a);
   q = max(q, b);
  }
  long long ans = max(p * p, max(q * q, x * y));
  cout << ans << endl;
 }
}