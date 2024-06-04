#include <iostream>
#include <cmath>
#include <algorithm>
 
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    int ctr = 0;
    for(int i = 0; i < n; i++){
        ctr+= abs(arr[i] - arr[n-i-1]);
    }
    cout << ctr/2 << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
            solve();
    }
    return 0;
}