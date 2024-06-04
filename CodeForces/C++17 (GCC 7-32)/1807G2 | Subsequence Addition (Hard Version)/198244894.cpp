#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"
 
void solve(){
 
   long long  n ;
   cin>>n;
   vector<long long >vec(n);
   for(long long  i=0; i<n; i++) cin>>vec[i];
   sort(vec.begin(),vec.end());
 
   long long  sum = 1;
   if(vec[0] != 1){
       cout<<"NO"<<endl;
       return;
   }
    for(long long  i=1; i<n; i++){
        if(vec[i] <= sum) {
            sum += vec[i];
            continue;
        }
        else {
            cout<<"NO"<<endl;
            return;
        }
    }
 
    cout<<"YES"<<endl;
}
void HossamFast(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
}
int main(){
    HossamFast();
    long long  t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}