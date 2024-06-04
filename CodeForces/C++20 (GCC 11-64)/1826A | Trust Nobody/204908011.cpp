#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, n;
    cin >>t;
    int a[101];
   while(t--){int n;cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int ans=-1;
        sort(a+1,a+1+n);
        for(int i=0;i<=n;i++)
        {
            int ctr=0;
            for(int j=1;j<=n;j++)
            if(a[j]>i) ctr++;
            if(ctr==i)
            ans=i;
        }
        cout<<ans<<endl;
 
        }
}
 
 
 