#include <iostream>
#include <algorithm>
#include <limits>
#include <cmath>
using namespace std;
 
class clsSolve {
private:
    int _t, _n;
    string _s;
public:
    void setT() {
        int t;
        cin >> t;
        _t = t;
    }
    int GetT() {
        return _t;
    }
    void setN() {
        int n;
        cin >> n;
        _n = n;
    }
    int GetN() {
        return _n;
    }
    void setString() {
        string s;
        cin >> s;
        _s = s;
    }
    string GetSring() {
        return _s;
    }
 
    void solve() {
        clsSolve solve;
        solve.setT();
        int test = solve.GetT();
        while (test--) {
            int ctr = 0, ans = 0;
            solve.setN();
            int size = solve.GetN();
            solve.setString();
            string str = solve.GetSring();
            for (int i = str.size() - 1; i >= 0; i--) {
                if (str[i] == 'P')
                    ctr++;
                else {
                    ans = max(ans, ctr);
                    ctr = 0;
                }
            }
            cout << ans << '\n';
        }
 
    }
};
 
int main() {
    clsSolve solve;
    solve.solve();
    return 0;
}