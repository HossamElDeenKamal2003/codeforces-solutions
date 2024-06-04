#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
class Solve {
private:
    int t, a, b;
    void getT() {
        cin >> t;
    }
    void getA() {
        cin >> a;
    }
    void getB() {
        cin >> b;
    }
public:
    bool check(int num1, int num2) {
        return num1 > num2;
    }
 
    void solve() {
        getT();
        while (t--) {
            getA();
            getB();
            if (check(a, b)) {
                swap(a, b);
            }
            Print();
        }
    }
 
    void Print() {
        cout << a << ' ' << b << '\n';
    }
};
 
int main() {
    Solve solve;
    solve.solve();
    return 0;
}