#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t; cin>>t; while(t--)
{
map<int,int> freq[2];
int n,m; cin>>n; m=n; for(int i=0,x;i<n;++i)
{
cin>>x;
m=min(m,n-++freq[0][++freq[1][x]]*freq[1][x]);
}
cout<<m<<'\n';
}
}