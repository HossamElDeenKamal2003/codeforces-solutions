#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <map>
using namespace std;
int arr[1001];
int Test() {
    int t;
    cin >> t;
    return t;
}
void solve() {
    int n, b; 
    cin >> n >> b;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++) {
        int val; 
        cin >> val;
        if (val % 2 == 0) 
            even++;
        else 
            odd++;
    }
    if (odd == 0) {
        cout << "No" << endl;
        return;
    }
    if (even == 0 && b % 2 == 0) {
        cout << "No" << endl;
        return;
    }
    if (b == n && odd % 2 == 0) {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
}
 
int main() {
    int t = Test();
    while (t--)
    {
        solve();
       
    }
    return 0;
}