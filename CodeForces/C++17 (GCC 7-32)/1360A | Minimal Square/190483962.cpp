#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Hossam() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
/*void solve() {
    int  n, a[100];
        cin >> n;
        vector<int>vec;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end());
        vector<int> vec2;
        int diff = 0;
        for (int i = 1; i < n; i++) {
            diff = vec[i] - vec[i - 1];
            vec2.push_back(diff);
        }
        sort(vec2.begin(), vec2.end());
        cout << vec2[0] << endl;
}*/
/*int main() {
    int t, n, a[100];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        vector<int> v;
        int diff = 0;
        for (int i = 1; i < n; i++) {
            diff = a[i] - a[i - 1];
            v.push_back(diff);
        }
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
}*/
int main() {
    Hossam();
    int t, num1, num2, m, n, res;
    cin >> t;
    while (t--) {
        cin >> num1 >> num2;
        if (num1 > num2)
            swap(num1, num2);
        m = max((num1 * 2), num2);
        n = max((num1 * 2), num2);
        res = m * n;
        cout << m * n<<'\n';
    }
}