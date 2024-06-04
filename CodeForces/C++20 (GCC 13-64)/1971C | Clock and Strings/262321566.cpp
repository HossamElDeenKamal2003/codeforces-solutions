#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <string> 
using namespace std;
 
class Solve {
private:
    int t, a, b, c, d;
    void getT() {
        cin >> t;
    }
    void getA() {
        cin >> a;
    }
    void getB() {
        cin >> b;
    }
    void getC() {
        cin >> c;
    }
    void getD() {
        cin >> d;
    }
public:
    bool solve() {
            getA();
            getB();
            getC();
            getD();
            if (b < a) {
                swap(a, b);
            }
            if ((a < c && c < b) || (a < d && d < b)) {
                if (!(a < c && c < b) || !(a < d && d < b)) {
                    return true;
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
    }
 
    void Print() {
        getT();
        while (t--) {
            cout << (solve() ? "Yes\n" : "NO\n");
        }
    }
};
 
int main() {
    Solve solve;
    solve.Print();
    return 0;
}