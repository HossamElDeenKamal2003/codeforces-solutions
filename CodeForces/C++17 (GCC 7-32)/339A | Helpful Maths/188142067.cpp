#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    s.erase(remove(s.begin(), s.end(), '+'), s.end());
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(i==s.size()-1){
            cout<<s[i];
            break;
        }
        cout<<s[i]<<'+';
    }
    return 0;
}