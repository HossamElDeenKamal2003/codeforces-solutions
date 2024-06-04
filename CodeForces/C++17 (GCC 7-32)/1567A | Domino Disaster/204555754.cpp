#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    //vector<char>vec;
    for(int i = 0; i < n; i++){
        if(s[i] == 'D')
            cout << 'U';
        else if(s[i] == 'U')
            cout <<'D';
        else if(s[i] == 'L')
            cout << 'L';
        else
            cout << 'R';
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
}
 