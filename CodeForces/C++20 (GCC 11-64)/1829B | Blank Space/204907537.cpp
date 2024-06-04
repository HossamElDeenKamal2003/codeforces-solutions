#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, n;
    cin >> t;
    vector<int>vec;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int ctr = 0, ans = 0;
         for(int i=0; i<n; i++){
            if(arr[i]==0)
                ctr++;
            else{
                ans=max(ans, ctr);
                ctr = 0;
            }
        }
        ans=max(ans,ctr);
        cout<<ans<<endl;
 
    }
}
 
 
 