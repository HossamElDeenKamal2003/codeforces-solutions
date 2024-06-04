#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
 
class Solve {
private:
    bool checkStr(const string& s) {
        set<char> st;
        for (char c : s) {
            st.insert(c);
        }
        return (st.size() != s.size());
    }
 
public:
    void solve() {
        int t;
        cin >> t;
        while (t--) {
            string s;
            cin >> s;
            string r = s;
            sort(r.begin(), r.end());
            if (s != r) {
                cout << "YES\n" << r << '\n';
            }
            else {
                reverse(r.begin(), r.end());
                if (s != r) {
                    cout << "YES\n" << r << '\n';
                }
                else {
                    cout << "NO\n";
                }
            }
        }
    }
};
 
int main() {
    Solve solve;
    solve.solve();
    return 0;
}