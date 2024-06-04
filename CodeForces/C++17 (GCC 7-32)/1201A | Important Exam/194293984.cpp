#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , m;
 cin >> n >>m;
 vector<string> v(n);
 for(int i= 0; i < n; i++){
  cin >> v[i];
 }
 
 long long int ctr = 0;
 vector<int> point(m);
 for(auto &x : point)
  cin >> x;
 
 for(int i = 0 ; i < m ; i++){
  map <char , int> mp;
  for(int j = 0 ;  j < n ; j++){
   mp[v[j][i]]++;
  }
  int temp = 0;
 
  for(auto x : mp){
   temp = max(temp,x.second);
  }
  ctr += (temp*point[i]);
 }
 
 cout << ctr << endl;
    return 0;
}