#include <iostream>
#include <vector>
using namespace std;
void solve() {
 
    long long int n, k;
    cin >> n >> k;
 
    long long  div = k / (n - 1);
    long long  m= k % (n - 1);
    long long  ans = n * div + m;
    if (m == 0)
        ans--;
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}