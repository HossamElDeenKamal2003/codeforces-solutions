#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <map>
using namespace std;
int Tests() {
    int t;
    cin >> t;
    return t;
}
int number() {
    int n;
    cin >> n;
    return n;
}
void solve(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    vector<int>vec;
    bool flag = true;
    vector<long long>b, c;
    int x = *min_element(arr.begin(), arr.end());
    if (count(arr.begin(), arr.end(), arr[0]) == n) {
        cout << -1 << endl;
        return;
    }
    for (int k : arr) {
        if (k == x) {
            b.push_back(k);
        }
        else {
            c.push_back(k);
        }
    }
    cout << b.size() << ' ' << c.size() << '\n';
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << ' ';
    cout << '\n';
    for (int i = 0; i < c.size(); i++)
        cout << c[i] << ' ';
    cout << '\n';
}
int main() {
    int t = Tests(), n;
    while (t--)
    {
        vector<int>vec;
        n = number();
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        solve(vec, n);
    }
    return 0;
}