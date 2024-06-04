#include <iostream>
using namespace std;
int solve(){
    int n, k, sum = 0,res, ans = 0;
    cin >> n >> k;
    res  = 240 - k, sum = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 5 * i;
 
        if (sum > res)
            break;
 
        ans = ans + 1;
    }
 
    return ans;
 
}
int main() {
        cout << solve() << endl;
    return 0;
}