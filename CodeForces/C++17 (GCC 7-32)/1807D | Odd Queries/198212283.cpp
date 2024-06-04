#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"
 
 
void solve(){
    long long n,t;
    cin>>n>>t;
    vector<long long>vec(n),pre(n,0);
    long long sum=0;
    for(long long i=0; i<n; i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    pre[0]=vec[0];
    for(long long i=1; i<n; i++) pre[i]=vec[i]+pre[i-1];
    while(t--){
        long long l,r,k; cin>>l>>r>>k;
        long long b=pre[r-1]-(pre[l-1]-vec[l-1]);
        long long nsm=sum-b+(r-l+1)*k;
        if(nsm%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}