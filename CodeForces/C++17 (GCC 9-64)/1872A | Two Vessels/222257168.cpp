#include<iostream>
using namespace std;
 
 
int main()
{
    int t;
    cin >> t;
    int a, b, c, ctr = 0;
    while (t--) {
        cin >>a>>b>>c;
        if (a == b) {
            cout << 0 << '\n';
        }
        else if (a > b) {
            ctr = 0;
            while (a > b) {
                a -= c;
                b += c;
                ctr++;
                if (a <= b)
                    break;
            }
            cout << ctr << '\n';
        }
        else {
            ctr = 0;
            while (b > a) {
                b -= c;
                a += c;
                ctr++;
                if (b <= a)
                    break;
            }
            cout << ctr << '\n';
        }
    }
 return 0;
}