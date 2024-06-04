#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int r=arr[0];
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>r)
                sum+=(arr[i]-r);
        }
        cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}