#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>  
using namespace std;
 
void HossamFast() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
}
void solve() {
 string s;
 cin >> s;
 char start = 'a';
 int sum = 0;
 for (int i = 0; i < s.size(); i++) {
  int l1 = abs(s[i] - start);
  int l2 = 26 - abs(l1);
  sum += min(l1, l2);
  start = s[i];
 }
 cout << sum << endl;
}
 
int main()
{
 HossamFast();
 solve();
}