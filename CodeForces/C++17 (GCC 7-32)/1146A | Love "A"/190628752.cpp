#include <iostream>
using namespace std;
int solve() {
 int len, ctr1 = 0, ctr2 = 0;
 string s;
 cin >> s;
 len = s.length();
 for (int i = 0; i < len; i++) {
  if (s[i] == 'a')
   ctr1++;
 }
 return min(len, 2 * ctr1 - 1);
}
int main()
{
 cout<<solve();
}