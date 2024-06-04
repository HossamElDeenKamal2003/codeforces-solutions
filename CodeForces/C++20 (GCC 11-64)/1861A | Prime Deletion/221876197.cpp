#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <map>
using namespace std;
 
class clstests {
private:
    string s;
    int t;
public:
    int getTests() {
        int t;
        cin >> t;
        return t;
    }
    string getTest() {
        string s;
        cin >> s;
        return s;
    }
 
    void loop() {
        clstests solve;
        int t = solve.getTests();
        while (t--) {
            string str = solve.getTest();
            for (int i = 0; i < str.size(); i++) {
                if (str[i] == '1') {
                    cout << "13\n";
                    break;
                }
                if (str[i] == '3') {
                    cout << "31\n";
                    break;
                }
            }
        }
    }
};
 
int main() {
    clstests solve;
    solve.loop();
    return 0;
}