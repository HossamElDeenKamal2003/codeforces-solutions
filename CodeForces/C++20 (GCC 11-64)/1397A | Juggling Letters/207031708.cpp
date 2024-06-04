#include <bits/stdc++.h>
 
using namespace std;
void solve()
{
  int n,i,j;
  cin>>n;
  map<int,int>mp;
  for(i=0;i<n;i++)
  {
    string s1;
    cin>>s1;
    for(j=0;j<s1.length();j++)
    mp[s1[j]-'a']++;
  }
  for(i=0;i<26;i++)
  {
    if(mp[i]==n)
    {
      mp[i]=0;
    }
    }
    for(i=0;i<26;i++)
    {
      if(mp[i]>0)
      {
        if(mp[i]%n!=0)
        {
          cout<<"NO"<<endl;
          return;
        }
      }
    }
  cout<<"YES"<<endl;
}
int main(){
  int t;
  cin >> t;
  while(t--)
    solve();
}