#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vll vector<ll>
#define pb push_back
void solve()
{
  long long n, m, i, j, k;
  cin>>n;
  vector<int> vec(n);
  for(i=0;i<n;i++)
    cin>>vec[i];
  vector<int> odd,even;
  vector<int> new_arr;
  for(i=0;i<n;i++)
  {
    if(vec[i]&1)
        odd.push_back(vec[i]);
    else
        even.push_back(vec[i]);
  }
  sort(even.begin(),even.end());
  sort(odd.begin(),odd.end());
  long long ctr_odd=0,ctr_even=0;
  for(i=0;i<n;i++)
  {
    if(vec[i]&1)
    {
        new_arr.push_back(odd[ctr_odd]);
       ++ctr_odd;
    }
    else
    {
 
        new_arr.push_back(even[ctr_even]);
      ++ctr_even;
    }
  }
  if(is_sorted(new_arr.begin(),new_arr.end()))
  cout<<"YES\n";
  else
  cout<<"NO\n";
 
 
 
}
 
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}