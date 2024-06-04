#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <set>
using namespace std;
 
void HossamFast() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
}
 
void solve()
{
    string s;
    cin >> s;
    int  n = s.size();
 
    string temp = "";
    for (int i = 0; i < 50; i++)
        temp += "Yes";
 
    if (temp.find(s) != string::npos)
    {
        cout << "YES\n";
        return;
    }
 
    cout << "NO\n";
}
 
int main()
{
    HossamFast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}