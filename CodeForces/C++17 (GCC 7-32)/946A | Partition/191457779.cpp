#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>  
#include <cmath>  
using namespace std;
 
void HossamFast() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
}
int main()
{
 HossamFast();
 int n, sum1 = 0, sum2 = 0;
 cin >> n;
 int arr[101];
 //vector<int>vece, veco;
 for (int i = 0; i < n; i++) {
  cin >> arr[i];
  if (arr[i] >0) {
   //vece.push_back(arr[i]);
   sum1 += arr[i];
  }
  else {
   //veco.push_back(arr[i]);
   sum2 += arr[i];
  }
 }
 cout<< (sum1 - sum2);
 
}