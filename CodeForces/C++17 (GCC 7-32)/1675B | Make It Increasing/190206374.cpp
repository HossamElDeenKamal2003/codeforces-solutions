#include <iostream>
#include <math.h>
using namespace std;
void solve(){
        long long n;
        cin >> n ;
        long long arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long ctr = 0;
        bool flag = false;
        for(int i = n-2; i >= 0; i--){
            if(arr[i+1] == 0){
                flag = true;
                break;
            }
            while(arr[i] >= arr[i+1]){
                ctr++;
                arr[i]/=2;
            }
 
        }
        if(flag)
            cout<<"-1 \n";
        else
            cout<<ctr<<'\n';
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}