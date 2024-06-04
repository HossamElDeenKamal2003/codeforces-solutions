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
int main()
{
 HossamFast();
 int n;
 cin >> n;
 //int p1 = 6, p2 = 6;
 //int sum = 0;
 if (n % 2 == 0)
  cout << "4" << " " << n - 4;
 else
  cout << "9" << " " << n - 9;
}