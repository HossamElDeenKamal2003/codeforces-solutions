#include <iostream>
#include <vector>
#include <unordered_set>
 
using namespace std;
int tests() {
    int t;
    cin >> t;
    return t;
}
int number() {
    int n;
    cin >> n;
    return n;
}
int main(){
    int test = tests();
    while (test--)
    {
        int ctr_1 = 0;
        long long  sum = 0;
        int n = number();
        vector<int>vec;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) {
                ctr_1++;
            }
            sum += x;
            vec.push_back(x);
        }
        if (sum - n >= ctr_1 && n != 1) {
            cout << "YES \n";
        }
        else {
            cout << "NO\n";
        }
 
    }
    return 0;
}