#include <bits/stdc++.h>
 
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    int l = arr[0];
    int r = arr[n-1];
    cout << r - l << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}