#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int solve() {
 int n, ans = -1;
 cin >> n;
 map<int, int>mp;
 for (int i = 1; i <= n; i++) {
  int x;
  cin >> x;
  mp[x]++;
  if (mp[x] >= 3)
   ans = x;
 }
 return ans;
}
int main()
{
 int t;
 cin >> t;
 while (t--) {
  cout << solve();
  cout << endl;
 }
}