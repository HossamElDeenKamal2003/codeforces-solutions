#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    s.erase(remove(s.begin(), s.end(), '?'), s.end());
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int len = s.size();
    char temp = s[len-1];
    if(temp == 'A' || temp == 'E' || temp == 'I' || temp == 'U' || temp == 'Y' || temp == 'O')
        cout << "YES\n";
    else
        cout << "NO\n";
}
 