#include <bits/stdc++.h>
 
using namespace std;
 
int test(){
    int t;
    cin >> t;
    return t;
}
int main() {
    int t = test();
    while (t--) {
        int n;
        cin >> n;
        int arr_1[101], arr_2[101], res = INFINITY;
        for (int i = 0; i < n; i++)
            cin >> arr_1[i] >> arr_2[i];
        for (int i = 0; i < n; i++) {
            if (arr_2[i] >= 3) {
                if (arr_2[i] % 2 == 1) {
                    res = min(res, arr_1[i] + (arr_2[i] / 2));
                }
                else {
                    res = min(res, arr_1[i]+(arr_2[i]/2-1));
                }
            }
            else{
                res = min(res, arr_1[i]);
            }
        }
        cout << res << endl;
    }
    return 0;
}