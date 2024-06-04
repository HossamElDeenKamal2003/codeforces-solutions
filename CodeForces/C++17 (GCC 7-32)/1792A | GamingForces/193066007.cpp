#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
void solve() {
 int n, ans = 0;
 cin >> n;
 int arr[100];
 for (int i = 0; i < n; i++) {
  cin >> arr[i];
 }
 for (int i = 0; i < n; i++) {
  if (arr[i] == 1)
   ans++;
 }
 cout << n - (ans / 2) << endl;
}
int main()
{
 int t;
 cin >> t;
 while (t--)
  solve();
}
 