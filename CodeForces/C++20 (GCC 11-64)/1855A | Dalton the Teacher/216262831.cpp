#include <iostream>
using namespace std;
int test() {
    int t;
    cin >> t;
    return t;
}
int solve() {
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i - 1];
        if (arr[i - 1] == i) {
            count++;
        }
    }
    return count;
}
int main() {
    int test_cases = test();
    while (test_cases--) {
        int count = solve();
        int div = count / 2;
        if (count % 2 != 0) {
            div++;
        }
        cout << div << endl;
    }
    return 0;
}