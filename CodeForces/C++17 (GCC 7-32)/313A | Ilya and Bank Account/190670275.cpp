#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
 int n;
 cin >> n;
 if (n >= 0)
  cout << n << '\n';
 else {
  int a = n / 10;
  int b = n / 100 * 10 + n % 10;;
  cout << max(a, b);
 }
}