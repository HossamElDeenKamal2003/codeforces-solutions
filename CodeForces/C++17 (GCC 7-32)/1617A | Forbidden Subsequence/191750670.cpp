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
bool compare(char a,char b)
{
    if(a=='b'&&b=='c')
    {
        return false;
    }
    else if(a=='c'&&b=='b')
    {
        return true;
    }
    return a < b;
}
void solve()
{
    string s,t;
    cin >> s >> t;
    sort(s.begin(),s.end());
    if(t=="abc"&&!s.find('a'))
    {
        sort(s.begin(),s.end(), compare);
    }
    cout << s << '\n';
}
int main()
{
    HossamFast();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}