#include <bits/stdc++.h>
 
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int miha = 0, bianca = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0)
            miha += arr[i];
        else
            bianca += arr[i];
    }
    if(miha > bianca)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}