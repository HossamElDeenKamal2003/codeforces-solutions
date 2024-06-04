#include <bits/stdc++.h>
#define ll long long
#define bs __builtin_popcount()
using namespace std;
 
int main()
{
    int t, a, b ;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << (a ^ b) << endl;
    }
}