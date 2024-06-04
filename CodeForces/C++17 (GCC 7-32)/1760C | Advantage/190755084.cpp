#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int solve() {
 
}
int main()
{
 int t;
 cin >> t;
 while (t--) {
  int n, sum = 0;
  cin >> n;
  vector<int>vec1, vec2;
  for (int i = 0; i < n; i++) {
   int x;
   cin >> x;
   vec1.push_back(x);
   vec2.push_back(x);
  }
  sort(vec2.begin(), vec2.end());
  for (int i = 0; i < n; i++) {
   if (vec1[i] != vec2[n - 1]) {
    sum = sum + (vec1[i] - vec2[n - 1]);
    cout << sum << " ";
    sum = 0;
   }
   else {
    sum = 0;
    sum = sum + (vec1[i] - vec2[n - 2]);
    cout << sum << " ";
    sum = 0;
   }
  }
  cout << endl;
 }
}
 