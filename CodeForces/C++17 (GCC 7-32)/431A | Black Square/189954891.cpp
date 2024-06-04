#include <iostream>
using namespace std;
void solve(int a1, int a2, int a3, int a4, string str) {
 int ans = 0;
 for (int i = 0; i < str.size(); i++) {
  if (str[i] == '1')
   ans += a1;
  else if (str[i] == '2')
   ans += a2;
  else if (str[i] == '3')
   ans += a3;
  else if (str[i] == '4')
   ans += a4;
 }
 cout << ans << '\n';
}
int main()
{
 int a, b, c, d;
 cin >> a >> b >> c >> d;
 string s;
 cin >> s;
 solve(a, b, c, d, s);
}