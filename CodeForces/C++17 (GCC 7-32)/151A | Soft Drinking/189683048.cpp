#include <iostream>
using namespace std;
int main()
{
    unsigned int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int sumkl = k * l;
    int sumtoaste = sumkl / nl;
    int sumcd = c * d;
    int sumnp = p / np;
    int m = min(sumtoaste, sumcd);
    int s = min(m, sumnp);
    cout << s/n;
}