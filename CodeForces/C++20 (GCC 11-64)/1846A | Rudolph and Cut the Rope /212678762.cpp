#include <bits/stdc++.h>
#define ll long long
using namespace std;
// fast cout and cin function
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
 
}
int main()
{
    HossamFast();
    int t, n;
    cin >> t;
    while(t--){
        int n, ans = 0;
        cin >> n;
        while(n--){
            int a,b;
            cin >> a >> b;
            if(a > b)
                ans++;
        }
        cout << ans << endl;
    }
}