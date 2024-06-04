#include <iostream>
#include <cmath>
 
using namespace std;
 
 
class clsSolver {
private:
    int t, n, a, b, result = 0;
    void getT() {
        cin >> t;
    }
    int postT() {
        return t;
    }
    void getN() {
        cin >> n;
    }
    int postN() {
        return n;
    }
    void getA() {
        cin >> a;
    }
    int postA() {
        return a;
    }
    void getB() {
        cin >> b;
    }
    int postB() {
        return b;
    }
public:
    short solve() {
        getN();
        getA();
        getB();
        int bulkPrice = (postN() / 2) * postB() + (postN() % 2) * postA(); // Cost of buying in bulk
        int singlePrice = postN() * postA(); // Cost of buying individually
        result = min(bulkPrice, singlePrice); // Choose the minimum cost
        return result;
    }
 
    void loopTestCases() {
        getT();
        int testCases = postT();
        while (testCases--)
        {
            cout << solve() << '\n';
        }
    }
};
int main() {
    clsSolver solve;
    solve.loopTestCases();
    return 0;
}