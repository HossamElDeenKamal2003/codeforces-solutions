#include <iostream>
using namespace std;
 
class clsSolve {
private:
    int _t, _a, _b, _c;
    void tests() {
        int t;
        cin >> t;
        _t = t;
    }
    void SetA() {
        int a;
        cin >> a;
        _a = a;
    }
    void SetB() {
        int b;
        cin >> b;
        _b = b;
    }
    void SetC() {
        int c;
        cin >> c;
        _c = c;
    }
public:
    void solve() {
        tests();
        while (_t--) {
            SetA();
            SetB();
            SetC();
            if (_a > _b) 
               cout << "First\n";
            else if (_b > _a)
               cout << "Second\n";
            else {
                if (_c % 2 != 0)
                    cout <<  "First\n";
                else
                    cout << "Second\n";
            }
        }
    }
    
};
 
int main() {
    clsSolve solve;
    solve.solve();
    return 0;
}