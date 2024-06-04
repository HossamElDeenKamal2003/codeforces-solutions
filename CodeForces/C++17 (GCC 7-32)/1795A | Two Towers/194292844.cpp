#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    string s1, s2, s3;
    int x,y;
    long long a , b;
    while(t--){
  cin>>x>>y>>s1>>s2;
  reverse(s2.begin(),s2.end());
  string s3=s1+s2;
  long ctr = 0;
  for(int i=0;i+1<(int)s3.size();i++){
   if(s3[i]==s3[i+1])
                ctr++;
  }
  cout << (ctr >1 ? "NO" : "YES")<<endl;
    }
    return 0;
}