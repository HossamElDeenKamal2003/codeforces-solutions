#include <bits/stdc++.h>
 
using namespace std;
int solve(){
    string str;
    cin >> str;
    set<char>st;
    for(int i = 0; i < str.size(); i++)
        st.insert(str[i]);
    if(st.size() == 1)
        return -1;
    return str.size()-1;
 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        cout << solve() << endl;
}