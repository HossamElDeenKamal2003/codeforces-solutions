#include <bits/stdc++.h>
 
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >>c;
    int x = abs(a-1);
    int y = abs(b-c) + (c-1);
    if(x < y)
        cout << 1 << endl;
    else if (x > y)
        cout << 2 << endl;
    else
        cout << 3 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
 
}