#include <iostream>
#include <cmath>
 
using namespace std;
 
class clsSolver {
private:
    unsigned short testCases, size, ctr = 0;
    string s1, s2, s3;
    void SettestCases() {
        cin >> testCases;
    }
    void SetSize() {
        cin >> size;
    }
    unsigned short GettestCases() {
        return testCases;
    }
    unsigned short GetSize() {
        return size;
    }
    void setS1() {
        cin >> s1;
    }
    void setS2() {
        cin >> s2;
    }
    void setS3() {
        cin >> s3;
    }
    string GetS1() {
        return s1;
    } 
    string GetS2() {
        return s2;
    }
    string GetS3() {
        return s3;
    }
public:
    bool solve() {
            SetSize();
            setS1();
            setS2();
            setS3();
            unsigned short n = GetSize();
            ctr = 0;
            for (int i = 0; i < n; i++) {
                if (s3[i] == s1[i] || s3[i] == s2[i])
                    ctr++;
            }
            if (ctr == n)
                return true;
            else
                return false;
    }
    void Print() {
        SettestCases();
        unsigned short t = GettestCases();
        while (t--)
        {
            bool flag = solve();
            if (!flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
       
    }
};
 
int main() {
    clsSolver solver;
    solver.Print();
    return 0;
}