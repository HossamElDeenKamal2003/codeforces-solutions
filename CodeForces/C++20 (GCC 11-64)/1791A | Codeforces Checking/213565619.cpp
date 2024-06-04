#include <bits/stdc++.h>
#define ll long long
using namespace std;
// fast cout and cin function
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
    string str = "codeforces";
    char ch;
    cin >> ch;
    bool flag = false;
    for(int i = 0; i < str.size(); i++){
        if(ch == str[i]) {
            flag = true;
            break;
        }
    }
    if(flag == true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main()
{
    HossamFast();
    // C O D E F O R C E S
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}