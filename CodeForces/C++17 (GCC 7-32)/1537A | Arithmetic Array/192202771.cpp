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
    int n, ctr=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ctr+=arr[i];
    }
    if(ctr<n){
        cout<<"1 \n";
    }
    else{
        cout<<ctr-n<<endl;
 
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