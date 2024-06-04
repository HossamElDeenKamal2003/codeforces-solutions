#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    char ch;
   cin>>ch;
   string check="codeforces";
   bool flag=false;
    for(int i=0;i<check.size();i++){
        if(ch==check[i]){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
 
    return 0;
}