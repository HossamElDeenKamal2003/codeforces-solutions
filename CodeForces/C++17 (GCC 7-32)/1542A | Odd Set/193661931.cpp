#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
int main()
{
 int t;
 cin >> t;
 while (t--) {
  int n;
  cin >> n;
  //int arr[100];
  /*for (int i = 0; i < n * 2; i++) {
   cin >> arr[i];
  }
  sort(arr, arr + n * 2);*/
  int ctr = 0;
  for (int i = 0; i < n * 2; i++) {
   int x;
   cin >> x;
   ctr = ctr + (x%2);
  }
  cout << (ctr == n ? "YES" : "NO") << endl;
 }
}