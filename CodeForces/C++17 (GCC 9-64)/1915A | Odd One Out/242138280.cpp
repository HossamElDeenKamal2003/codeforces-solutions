#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        if (n == m)
            cout << x << '\n';
        else if (m == x)
            cout << n << '\n';
        else
            cout << m << '\n';
    }
    return 0;
}