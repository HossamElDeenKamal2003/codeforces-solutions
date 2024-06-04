#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    int ctr = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            ctr += 1;
        }
        n /= 10;
    }
    if (ctr == 4 || ctr == 7)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    return 0;
}