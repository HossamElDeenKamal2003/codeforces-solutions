#include <iostream>
#include <algorithm>
#include <limits>
#include <cmath>
#include <vector>
 
using namespace std;
class clsSolve
{
private:
    int _t, _n, _m;
public:
    vector<string>vec;
    void SetT() {
        int t;
        cin >> t;
        _t = t;
    }
    void SetN() {
        int n;
        cin >> n;
        _n = n;
    }
    void SetM() {
        int m;
        cin >> m;
        _m = m;
    }
    int GetT() {
        return _t;
    }
    int GetN() {
        return _n;
    }
    int GetM() {
        return _m;
    }
};
 
class clsTest {
private:
    clsSolve solve;
    int _t, _n, _m, diff = INT_MAX;
    string s;
    long long cost(string s, string t) {
        long long c = 0;
        for (int i = 0; i < s.size(); i++) {
            c += abs(s[i] - t[i]);
        }
        return c;
    }
public:
    void test() {
        solve.SetT();
        _t = solve.GetT();
        while (_t--) {
            solve.SetN();
            _n = solve.GetN();
            solve.SetM();
            _m = solve.GetM();
            vector<string> s(_n);
            for (int i = 0; i < _n; i++) {
                cin >> s[i];
            }
            long long ans = INT_MAX;
            for (int i = 0; i < _n - 1; i++) {
                for (int j = i + 1; j < _n; j++) {
                    ans = min(ans, cost(s[i], s[j]));
                }
            }
            cout << ans << "\n";
        }
    }
};
 
int main() {
    clsTest tests;
    tests.test();
    return 0;
}