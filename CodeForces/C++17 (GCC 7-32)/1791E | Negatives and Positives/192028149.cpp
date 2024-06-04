#include <bits/stdc++.h>
 
using namespace std;
/*void solve(){
    int n;
    cin>>n;
    int p1=0,p2=0;
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            p2++;
        }
        if(s[i]=='R'){
            p1++;
        }
        if(s[i]=='D'){
            p2--;
        }
        if(s[i]=='L'){
            p1--;
        }
        if(p1==1){
           if(p2==1){
            flag=true;
            break;
        }
    }}
   if(flag==true){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
 
}*/
void solve(){
    int n;
    cin>>n;
    vector<long long>vec;
    long long sum=0,maxx=0,ctr=0,mini=-1e18;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0;i<n;i++){
        sum+=vec[i];
    }
    maxx=sum;
    sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(vec[i]);
        if(vec[i]<0){
            ctr++;
        }
        mini=max(mini,-(long long)abs(vec[i]));
    }
    if(ctr%2==0){
        mini=0;
    }
    cout<<max(maxx,sum+2*mini)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
 
 
    return 0;
}