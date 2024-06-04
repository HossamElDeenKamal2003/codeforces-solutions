#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <map>
using namespace std;
class clsSolve {
private:
    int number() {
        int n;
        cin >> n;
        return n;
    }
    int n = number(), ctr = 0;
    vector<int>vec;
public:
    clsSolve() {
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
    }
    void Process() {
        for (int i = 0; i < n; i++) {
            ctr += vec[i];
        }
    }
    void Print() {
        if (ctr % 2 == 0)
            cout << "Yes\n";
        else
            cout << "NO\n";
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        clsSolve solve;
        solve.Process();
        solve.Print();
    }
    return 0;
}