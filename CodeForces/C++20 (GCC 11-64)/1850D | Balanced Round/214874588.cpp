#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
 
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n ; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int i = 0;
    int ans = 0;
    while(i < n){
        int j = i + 1;
        while(j < n){
            if(arr[j] - arr[j-1]>k)
                break;
            j++;
        }
        int ctr = j - i;
        ans = max(ans, ctr);
        i = j;
    }
    cout << n - ans << endl;
}
int main() {
   int t;
   cin >> t;
   while(t--)
    solve();
}