#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{   
 vector<long long> vec;
 for (int i = 0; i < 4; i++)
 {
  int n;
  cin >> n;
  vec.push_back(n);
 }
 sort(vec.begin(), vec.end());
 for (int i = 0; i < 3; i++)
 {
  cout << vec[3] - vec[i] << " ";
 }
}