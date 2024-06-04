#include <bits/stdc++.h>
#define ll long long
using namespace std;
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
int solve(long long n){
 ll ctr = 0;
 while(n != 1)
 {
  if(n%6==0){
   n/=6;
   ctr++;
  }
  else if(n%3==0){
   n*=2;
   ctr++;
  }
  else
  {
   return -1;
  }
 }
 return ctr;
}
int main()
{
    HossamFast;
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
}