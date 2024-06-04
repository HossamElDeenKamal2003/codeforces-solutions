#include <bits/stdc++.h>
 
using namespace std;
void solve(){
       int n,test=0;
       cin>>n;
       set<int>s;
       for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
       }
       int k=s.size();
       int r=n-k;
        if(r&1)
            cout << k - 1<<'\n';
        else
         cout << k<<'\n';
    }
int main()
{
   int t;
   cin>>t;
   while(t--)
    solve();
}