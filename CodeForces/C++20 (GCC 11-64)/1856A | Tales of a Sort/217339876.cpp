#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int tests(){
    int t;
    cin >> t;
    return t;
}
int number(){
    int t;
    cin >> t;
    return t;
}
int main() {
    int t = tests();
    while (t--) {
        int n = number();
        int arr[n];
        for(int i= 0; i< n; i++)
            cin >> arr[i];
        int temp = -1;
        if(is_sorted(arr,arr+n)){
            cout << '0' << endl;
            continue;
        }
        int x = -1;
        for(int i = n-1; i>=0; i--){
            if(arr[i] >= arr[i-1]){
                continue;
            }
            else{
                x=i;
                break;
            }
        }
        int ans = *max_element(arr, arr+x);
        cout << ans << endl;
    }
    return 0;
}