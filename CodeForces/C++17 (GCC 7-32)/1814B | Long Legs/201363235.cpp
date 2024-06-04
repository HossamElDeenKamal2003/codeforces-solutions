#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    for(int i = 2; i <= 100000; i++){
   sum = min(sum,(a+i-1)/i+(b+i-1)/i+i-1);
  }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}