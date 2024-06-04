#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int tests() {
    int t;
    cin >> t;
    return t;
}
class clsSolve {
private:
    int diffrence = 0;
public:
    int a, b;
    int answer() {
        if (a == b)
            return 0;
        else {
            diffrence = abs(a - b);
            diffrence %= 2;
            if (a < b && diffrence == 1)
                return 1;
            else if (a > b && diffrence == 0)
                return 1;
            else
                return 2;
        }
    }
};
int main() {
    clsSolve solve;
    int test_cases = tests();
    while (test_cases--)
    {
        cin >> solve.a >> solve.b;
        cout << solve.answer() << endl;
    }
    return 0;
}