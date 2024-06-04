#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int temp = 1;
    long long int ans = 0;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        if(x >= temp )
            ans += x - temp ;
        else
            ans += n - (temp  - x);
        temp  = x;
    }
 
    cout << ans << endl;
}
int main()
{
    solve();
}