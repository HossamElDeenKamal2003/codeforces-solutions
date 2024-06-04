#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
 
void HossamFast() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
}
void solve() {
 string a, b, c;
 cin >> a >> b >> c;
 bool flag = true;
 for (int i = 0; i < a.size(); i++) {
  if (!(a[i] == c[i] || b[i] == c[i])) {
   flag = false;
  }
 }
 if (flag==true)
  cout << "yes\n";
 else {
  cout << "no\n";
 }
}
 
int main()
{
 HossamFast();
 unsigned int t;
 
 cin >> t;
 while(t--)
  solve();
}