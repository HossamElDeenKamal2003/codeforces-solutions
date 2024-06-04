#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>  
#include <cmath>  
#include <set>  
using namespace std;
 
void HossamFast() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
}
int fun(int a,int b,int c) {
 int  x = (c - b) / a;
 return x * a + b;
}
int main()
{
 HossamFast();
 int t, a, b, c;
 cin >> t;
 while (t--) {
  cin >> a >> b >> c;
  cout << fun(a, b, c);
  cout << endl;
 }
}