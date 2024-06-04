#include <bits/stdc++.h>
 
using namespace std;
string solve(){
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < s.size() / 2; i++)
            st.insert(s[i]);
        if (st.size() > 1)
            return "YES";
        return "NO";
}
int main(){
    int t;
    cin >> t;
    while(t--){
      cout <<  solve() << endl;
    }
}