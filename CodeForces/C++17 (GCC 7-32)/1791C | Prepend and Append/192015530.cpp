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
   string s;
   cin>>s;
   int len=s.size();
   int i=0,j=n-1;
   while(i<j){
        if(s[i]!=s[j]){
            i++;
            j--;
        }
        else
            break;
      }
      cout<<j-i+1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
 
 
    return 0;
}