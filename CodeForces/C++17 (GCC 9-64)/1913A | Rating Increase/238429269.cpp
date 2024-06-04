#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        bool found = false;
        for (int i = 1; i <= (int)s.size() - 1; i++) {
            string a = s.substr(0, i);
            string b = s.substr(i);
            if (a[0] == '0' || b[0] == '0') {
                continue;
            }
            if (a.size() < b.size() || (a.size() == b.size() && a < b)) {
                cout << a << " " << b << '\n';
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << '\n';
        }
    }
}