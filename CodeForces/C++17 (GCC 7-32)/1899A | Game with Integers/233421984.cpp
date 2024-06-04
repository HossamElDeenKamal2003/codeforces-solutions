#include <iostream>
using namespace std;
class clsSolve {
private:
    int _t, _num;
    void SetT() {
        cin >> _t;
    }
    int GetT() {
        return _t;
    }
    void SetNum() {
        cin >> _num;
    }
    int GetNum() {
        return _num;
    }
public:
    void solve() {
        SetT();
        int testCases = GetT();
        while (testCases--)
        {
            SetNum();
            int number = GetNum();
            if (number % 3 == 1 || number % 3 == 2)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }
};
int main()
{
    clsSolve solve;
    solve.solve();
}