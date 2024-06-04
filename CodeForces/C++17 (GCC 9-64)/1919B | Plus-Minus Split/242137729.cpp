#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, ctr = 0;
        char x;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == '+')
                ctr++;
            else
                ctr--;
        }
        cout << abs(ctr) << endl;
 
    }
    return 0;
}