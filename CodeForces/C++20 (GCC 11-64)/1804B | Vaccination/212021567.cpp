#include <bits/stdc++.h>
#define ll long long
using namespace std;
// fast cout and cin function
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 
int solve(){
    int n, k, d, w;
    cin >> n >> k >> d >> w;
    vector<int>vec;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int when = -1, ctr = 0, ans = 0;
    for(int i =0; i < n; i++){
        if(vec[i] <= when+d && ctr > 0)
            ctr--;
        else{
            when = vec[i] + w;
            ctr = k - 1;
            ans++;
        }
    }
    return ans;
}
int main()
{
    HossamFast();
    int t;
    cin >> t;
    while(t--)
        cout << solve() << endl;
}