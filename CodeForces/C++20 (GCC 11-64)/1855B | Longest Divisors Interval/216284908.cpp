#include <iostream>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    int maxi = 0, ctr = 0;
    for (int i = 1; i <= 10000; i++) {
        if (n % i == 0) {
            ctr++;
        }
        else {
            ctr = 0;
        }
        if (ctr > maxi) {
            maxi = ctr;
        }
    }
    cout << maxi << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}