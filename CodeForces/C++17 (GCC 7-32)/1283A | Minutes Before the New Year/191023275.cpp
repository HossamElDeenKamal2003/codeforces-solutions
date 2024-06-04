#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
/*int solve() {
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
}*/
int main()
{
 /*int t;
 cin >> t;
 while (t--) {
  cout << solve();
  cout << endl;
 }*/
 /*int n;
 cin >> n;
 vector<int>vec;
 for (int i = 0; i < n; i++) {
  int x;
  cin >> x;
  vec.push_back(x);
  if (vec[i] == 1) {
   cout << -1<<endl;
   exit(0);
  }
 }
 cout << 1<<endl;*/
 int h, m, t, day, time;
 cin >> t;
 while (t--)
 {
  time = 0;
  cin >> h >> m;
  day = 24 * 60;
  time = h * 60 + m;
  cout << day - time << endl;
 }
 
}