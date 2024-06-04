#include <iostream>
 
using namespace std;
string solve(){
    int n;
    string s, t;
    cin >> n >>s;
    t="";
    for (int i=n-1;i>=0;i--) {
        if (s[i]=='0') t=char(s[--i]+10*s[--i]+80)+t;
        else t=char(s[i]+48)+t;
    }
    return t;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        cout << solve() << endl;
}