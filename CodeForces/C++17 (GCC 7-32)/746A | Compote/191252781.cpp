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
void HossamFast() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
}
/*void solve() {
 long long n;
 cin >> n;
 if (n & 1) {
  cout << "YES" << endl;
 }
 else {
  bool flag = false;
  long long  div = n;
  while (div > 2) {
   div /= 2;
   if (div & 1) {
    if (n % div == 0) {
     flag = true;
     break;
    }
   }
  }
  if (flag) {
   cout << "YES" << endl;
  }
  else {
   cout << "NO" << endl;
  }
 }
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
 /*int h, m, t, day, time;
 cin >> t;
 while (t--)
 {
  time = 0;
  cin >> h >> m;
  day = 24 * 60;
  time = h * 60 + m;
  cout << day - time << endl;
 }*/
 HossamFast();
 /*int t;
 cin >> t;
 while (t--) {
  solve();
 }*/  
 /*int arr[1001];
 
 int j = 1;
 for (int i = 1; i <= 1666; i++) {
  if (i % 3 != 0)
  {
   if (i % 10 != 3) {
    arr[j] = i;
    j = j + 1;
   }
 
  }
 }
 int t;
 cin >> t;
 int k;
 while (t--) {
  cin >> k;
  cout << arr[k] << endl;
 }*/
 int a, b, c, i;
 cin >> a >> b >> c;
 for ( i = a; i >= 1; i--)
  if (b >= 2 * i && c >= 4 * i)
   break;
 printf("%d", 7 * i);
}