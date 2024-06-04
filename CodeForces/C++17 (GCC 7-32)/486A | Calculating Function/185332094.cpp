#include <iostream>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, res;
    cin >> n;
    if(n%2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        res = -(n / 2 + 1);
        cout << res;
    }
 
    return 0;
}