#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
 cin>>t;
 while(t--)
 {
  int n,k,ans=INT_MAX;
  cin>>n;
  map<int,int> prev;
  for(int i=1;i<=n;i++){
   cin>>k;
   if(prev[k])ans=min(ans,1+i-prev[k]);
   prev[k]=i;
  }
  cout<<(ans==INT_MAX?-1:ans)<<endl;
 }
 return 0;
}