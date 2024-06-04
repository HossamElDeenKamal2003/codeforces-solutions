#include<bits/stdc++.h>
 
using namespace std;
void HossamFast() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
}
 
 
int main()
{
    HossamFast();
    int m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>t;
    while(t--)
    {
        int cnt=0,ans=0, ok=0;
        cin>>n;
        int a[n];
        map<int,int>mp;
        set<int>s;
        set<int>::iterator it ;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=2048) mp[a[i]]++, s.insert(a[i]);
        }
        for(it=s.begin() ; it!=s.end() ;it++) cnt+= (*it) * (mp[*it]);
 
        if(cnt>=2048)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
 