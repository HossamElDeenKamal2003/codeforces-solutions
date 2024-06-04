#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
class NumberChecker {
private:
    int testcases;
    int numbers;
    void setcases(){
        cin >> testcases;
    }
    int GetTestcases(){
        return testcases;
    }
    void setNumbers(){
        cin >> numbers;
    }
    int Getnumbers(){
        return numbers;
    }
public:
    void checkNumbers() {
        setcases();
        int t = GetTestcases();
        while (t--) {
            setNumbers();
            int n = Getnumbers();
            vector<int> even, odd;
            for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                x & 1 ? odd.push_back(x) : even.push_back(x);
            }
 
            bool ok = is_sorted(even.begin(), even.end()) && is_sorted(odd.begin(), odd.end());
            ok ? cout << "YES\n" : cout << "NO\n";
        }
    }
};
 
int main() {
    NumberChecker solve;
    solve.checkNumbers();
 
    return 0;
}