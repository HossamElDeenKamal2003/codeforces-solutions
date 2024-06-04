#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
class clsSolve {
private:
    unsigned short testCases;
    string s_1, s_2, s_3;
    void SetTestCases() {
        cin >> testCases;
    }
    unsigned short GetTestCases() {
        return testCases;
    }
    void setS_1() {
        cin >> s_1;
    }
    void setS_2() {
        cin >> s_2;
    }
    void setS_3() {
        cin >> s_3;
    }
    string GetS_1() {
        return s_1;
    }
    string GetS_2() {
        return s_2;
    }
    string GetS_3() {
        return s_3;
    }
public:
    void solve() {
        SetTestCases();
        int t = GetTestCases();
        while (t--) {
            setS_1();
            setS_2();
            setS_3();
            int ctr = 6;
            for (int i = 0; i < 3; i++) {
                    if (s_1[i] == '?') {
                        string maxx = s_1;
                        for (int i = 0; i < 3; i++) {
                            if (maxx[i] == 'A') {
                                ctr--;
                            }
                            if (maxx[i] == 'B') {
                                ctr -= 2;
                            }
                            if (maxx[i] == 'C') {
                                ctr -= 3;
                            }
                        }
                        if (ctr == 1)
                            cout << 'A' << endl;
 
                        if (ctr == 2) {
                            cout << 'B' << endl;
                        }
                        if (ctr == 3) {
                            cout << 'C' << endl;
                        }
                    }
                }
            for (int i = 0; i < 3; i++) {
                if (s_2[i] == '?') {
                    string maxx = s_2;
                    for (int i = 0; i < 3; i++) {
                        if (maxx[i] == 'A') {
                            ctr--;
                        }
                        if (maxx[i] == 'B') {
                            ctr -= 2;
                        }
                        if (maxx[i] == 'C') {
                            ctr -= 3;
                        }
                    }
                    if (ctr == 1)
                        cout << 'A' << endl;
 
                    if (ctr == 2) {
                        cout << 'B' << endl;
                    }
                    if (ctr == 3) {
                        cout << 'C' << endl;
                    }
                }
            }
            for (int i = 0; i < 3; i++) {
                if (s_3[i] == '?') {
                    string maxx = s_3;
                    for (int i = 0; i < 3; i++) {
                        if (maxx[i] == 'A') {
                            ctr--;
                        }
                        if (maxx[i] == 'B') {
                            ctr -= 2;
                        }
                        if (maxx[i] == 'C') {
                            ctr -= 3;
                        }
                    }
                    if (ctr == 1)
                        cout << 'A' << endl;
 
                    if (ctr == 2) {
                        cout << 'B' << endl;
                    }
                    if (ctr == 3) {
                        cout << 'C' << endl;
                    }
                }
            }
            }
            
    }
};
int main() {
    clsSolve solve;
    solve.solve();
    return 0;
}