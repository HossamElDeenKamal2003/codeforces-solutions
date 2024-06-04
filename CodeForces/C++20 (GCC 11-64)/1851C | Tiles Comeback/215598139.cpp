#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
 
        int x = n - 1;
        int ctr = 0;
 
        for (int i = 0; i < n; i++) {
            if (vec[i] == vec[0]) {
                ctr += 1;
            }
 
            if (ctr == k) {
                x = i;
                break;
            }
        }
 
        if (ctr < k) {
            cout << "NO" << std::endl;
            continue;
        }
        else {
            if (vec[0] == vec[n - 1]) {
                cout << "YES" << std::endl;
                continue;
            }
        }
        ctr = 0;
        for (int i = n - 1; i > x; i--) {
            if (vec[i] == vec[n - 1]) {
                ctr += 1;
            }
        }
 
        if (ctr >= k) {
            cout << "YES" << std::endl;
        }
        else {
           cout << "NO" << std::endl;
        }
 
    }
 
    return 0;
}