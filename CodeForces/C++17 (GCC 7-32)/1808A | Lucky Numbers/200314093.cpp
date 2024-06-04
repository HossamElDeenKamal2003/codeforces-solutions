#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
       int l, r, ans, maxi = INT_MIN;
       cin >> l >> r;
       for(int i = l; i <= min(l + 200, r); i++)
       {
          string s = to_string(i);
          sort(s.begin(), s.end());
          int diff = (s.back() - '0') - (s.front() - '0');
          if(diff > maxi)
          {
             maxi = diff;
             ans = i;
          }
       }
       cout << ans << endl;
    }
}