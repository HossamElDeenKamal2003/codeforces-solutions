#include <iostream>
 
using namespace std;
 void solve()
{
    string str;
    cin >> str;
 
    if (str.size() == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << ((str.substr(0, str.size() / 2) == str.substr(str.size() / 2)) ? "YES" : "NO");
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}