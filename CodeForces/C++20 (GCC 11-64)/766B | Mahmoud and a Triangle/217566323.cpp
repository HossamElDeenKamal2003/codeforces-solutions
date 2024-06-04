#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;
class clsSolve {
private:
    int number() {
        int n;
        cin >> n;
        return n;
    }
    int n = number();
    bool flag = false;
    vector<int>vec;
public:
    clsSolve() {
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
    }
    void Print() {
        sort(vec.begin(), vec.end());
        for (int i = 0; i < n; i++) {
            if (vec[i] + vec[i + 1] > vec[i + 2]) {
                if (vec[i + 2] + vec[i + 1] > vec[i]) {
                    if (vec[i] + vec[i + 2] > vec[i + 1]) {
                        flag = true;
                    }
                }
            }
        }
        if (flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
};
int main() {
    clsSolve solve;
    solve.Print();
    return 0;
}