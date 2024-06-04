#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
class clsSolve {
public: /* make class member public */
    long long a, b, t;
    string solve() {
        if (a % 2 == b % 2) {
            if (b * b > a)
                return "NO";
            else
                return"YES";
        }
        else
            return "NO";
    }
};
int main() {
    clsSolve solve; /* object from clSolve class */
    cin >> solve.t;
    while (solve.t--) {
        cin >> solve.a >> solve.b;
        cout << solve.solve() << endl;
    }
    return 0;
}