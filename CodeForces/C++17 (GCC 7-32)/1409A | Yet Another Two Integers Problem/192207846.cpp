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
    int a,b,ctr=0;
    cin>>a>>b;
    int maxx=max(a,b);
    int mini=min(a,b);
    ctr=(maxx-mini)/10;
    //cout<<ctr;
    if(a==b){
            cout<<0<<"\n";
        }else{
            if(abs(a-b)%10==0){
                cout<<abs(a-b)/10<<"\n";
            }else{
                cout<<(abs(a-b)/10)+1<<"\n";
            }
        }
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
 
 
    return 0;
}