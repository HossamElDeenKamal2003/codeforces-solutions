#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>
using namespace std;
 
int solve(int n, int m, int k, int h) {
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    int ans=0;
    for(int i=0;i<n;i++){
      int sub = abs(h-vec[i]);
      bool bol_1 = qu.size() && sub%k==0;
      bool bol_2 = qu.size() && sub<=(m-1)*k;
      bool bol_3 = qu.size() && sub;
      if(qu.size() && bol_1 && bol_2 && bol_3)
        ans++;
    }
    return ans;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        cout << solve(n,m,k,h) << endl;
    }
}
 