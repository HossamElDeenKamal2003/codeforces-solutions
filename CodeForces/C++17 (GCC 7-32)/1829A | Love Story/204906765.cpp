#include <bits/stdc++.h>
 
using namespace std;
int solve(string s){
    string target = "codeforces";
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != target[i])
            ans++;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
 
}
 