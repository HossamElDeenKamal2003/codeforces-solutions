#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <map>
using namespace std;
int arr[1001];
int Test() {
    int t;
    cin >> t;
    return t;
}
string number() {
    string num;
    cin >> num;
    return num;
}
 
void Print(string s) {
    string str = "";
    int ctr = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > '0') str += s[i] + string(s.size() - (i + 1), '0') + " ", ctr++;
    }
    cout << ctr << endl << str << endl;
}
int main() {
    int t = Test();
    while (t--) {
        string n = number();
        Print(n);
    }
    return 0;
}