#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
    int w, h;
    ll n, ans = 1;
    cin >> w >> h >> n;
    if(n == 1)
    {
        cout << "YES" <<endl;
        continue;
    }
     while(w % 2 == 0){
            ans *= 2;
            w = w / 2;
        }
        while(h % 2 == 0){
            ans *= 2;
            h = h / 2;
        }
        if( n <= ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}