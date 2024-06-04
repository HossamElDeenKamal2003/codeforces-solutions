#include <bits/stdc++.h>
using namespace std;
 
typedef vector<string> vi;
 
int main() {
 int t;
    cin >> t;
 while (t--) {
  int n; 
  cin >> n;
  vi p(n*3);
  map<string, int> mp;
  vector<int> s(3);
 
  for (string& s : p) {
   cin >> s;
   mp[s]++;
  }
 
  for (int i=0; i<n*3; i++) {
   switch (mp[p[i]]) {
    case 1: s[i/n] += 2;
    case 2: s[i/n]++;
   }
  }
 
  for (auto a : s) {
   cout << a << ' ';
  }
 
  cout << '\n';
 }
}