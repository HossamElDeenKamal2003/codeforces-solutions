#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    ans = a;
    while(a>=b){
        int temp = a/b;
        ans += temp;
        int k = a%b;
        a = temp + k;
    }
    cout << ans << '\n';
}
 