#include <bits/stdc++.h>
 
using namespace std;
string s = "0123456789";
int main()
{
    /*int t, k, ctr = 0;
    cin >> t >> k;
    string s;
    cin>>s;
    vector<int>vec;
    for(int i=0; i<s.size(); i++)
    {
        int x = s[i]-'0';
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i <= k; i++)
    {
 
    }*/
    int n,k;
 cin>>n>>k;
 vector<string> vec;
 for(int i=0;i<n;i++){
  string s;
  cin>>s;
  vec.push_back(s);
 }
 int ans=0;
 
 for(int i=0;i<n;i++){
  int val=0;
  for(int j=0;j<=k;j++){
  if( vec[i].find(to_string(j)) !=-1)
   val++;
 
  }
  if(val==k+1)
            ans++;
 
 }
 
    cout<<ans<<endl;
}