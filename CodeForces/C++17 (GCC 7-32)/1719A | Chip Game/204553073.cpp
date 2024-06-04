#include <bits/stdc++.h>
 
using namespace std;
string solve(long long n, long long m){
    long long sum = 0;
    sum = n + m;
    string tonya = "Tonya";
    string burenka = "Burenka";
    if(sum%2==0)
        return tonya;
    else
        return burenka;
 
 
}
int main()
{
    int t;
    cin >> t;
    long long n, m;
    while(t--){
        cin >> n >> m;
        cout << solve(n, m) << endl;
    }
}
 