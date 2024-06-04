#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<long long> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        long long pre = 0, mn;
        for (int i = 0; i < n; i++) {
            mn = min(b, abs(vec[i] - pre) * a);
            f -= mn;
            pre = vec[i];
        }
        if (f > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
 
    return 0;
}