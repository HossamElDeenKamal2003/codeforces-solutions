#include <iostream>
#include <algorithm>
#include <limits>
#include <cmath>
using namespace std;
 
class clsSolve {
private:
    int _t, _n;
public:
    void SetT() {
        cin >> _t;
    }
    int GetT() {
        return _t;
    }
    void SetN() {
        cin >> _n;
    }
    int GetN() {
        return _n;
    }
 
    void solve() {
        SetT();
        int t = GetT();
        while (t--)
        {
            SetN();
            int num = GetN();
            if (num <= 6 || num == 9)
                cout << "NO\n";
            else if (num % 3) {
                cout << "YES\n";
                cout << 1 << ' ' << 2 << ' ' << num - 3 << endl;
            }
            else {
                cout << "YES\n";
                cout << 1 << ' ' << 4 << ' ' << num - 5 << endl;
            }
        }
    }
};
 
int main() {
    clsSolve solve;
    solve.solve();
    return 0;
}