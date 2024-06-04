#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;
class clsSolve {
private:
    string _str_1, _str_2;
    int _ctr_1, _ctr_2;
    void fun_1() {
        string s;
        cin >> s;
        _str_1 = s;
        string m;
        cin >> m;
        _str_2 = m;
    }
public:
    void Print() {
        fun_1();
        _ctr_1 = _str_1.size();
        _ctr_2 = _str_2.size();
        if (_str_1 == _str_2)
            cout << -1 << endl;
        else
            cout << max(_ctr_1, _ctr_2);
   }
};
int main() {
    clsSolve solve;
    solve.Print();
    return 0;
}