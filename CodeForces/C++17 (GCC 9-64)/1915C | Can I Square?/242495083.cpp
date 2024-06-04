#include <iostream>
#include <cmath>
 
using namespace std;
 
class clsSolver {
public:
    void solve() {
        int t;
        cin >> t;
 
        for (int i = 0; i < t; i++) {
            int n;
            cin >> n;
            long long sum = 0;
 
            for (int i = 0; i < n; i++) {
                int num;
                cin >> num;
                sum += num;
            }
 
            long double s = sqrt(sum);
            int ss = static_cast<int>(s);
 
            if (ss == s)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
};
 
int main() {
    clsSolver solver;
    solver.solve();
    return 0;
}