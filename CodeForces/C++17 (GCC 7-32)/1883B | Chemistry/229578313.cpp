#include <iostream>
#include <algorithm>
#include <limits>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
 
class clsSolve {
private:
    int _t, _n, _k, _res;
    string _str;
    bool _flag = true;
public:
    void SetT() {
        cin >> _t;
    }
    int GetT() {
        return _t;
    }
    void SetN() {
        cin >> _n;
    }
    int GetN() {
        return _n;
    }
    void SetK() {
        cin >> _k;
    }
    int GetK() {
        return _k;
    }
    void SetString() {
        cin >> _str;
    }
    string GetString() {
        return _str;
    }
    bool checkPalindrome(string str) {
        string s = str;
        reverse(str.begin(), str.end());
        if (s == str)
            return true;
        else
            return false;
    }
    bool check(int k, int ctr) {
        bool ans = _k >= ctr - 1;
        return ans;
    }
    void Print(bool flag) {
        if (flag == true) {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    void solve() {
        SetT();
        int t = GetT();
        while (t--)
        {
            int ctr = 0;
            SetN();
            SetK();
            SetString();
            string s = GetString();
            bool flag = checkPalindrome(s);
            if (flag == true)
                cout << "YES\n";
            else {
                vector<int>vec(26, 0);
                for (char ch:s) {
                    vec[ch - 'a']++;
                }
                for (int i = 0; i < 26; i++) {
                    if (vec[i] % 2 == 1) {
                        ctr++;
                    }
                }
                _flag = check(_k, ctr);
                Print(_flag);
            }
 
        }
    }
};
 
int main() {
    clsSolve solve;
    solve.solve();
    return 0;
}