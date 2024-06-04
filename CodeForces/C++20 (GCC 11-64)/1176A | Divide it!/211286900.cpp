#include <bits/stdc++.h>
#define ll long long
using namespace std;
// fast cout and cin function
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
// solve function
int solve(ll n){
        if(n == 1){
           return 0;
        }
        ll ctr = 0;
        while(n > 1){
                if(n % 2 == 0){
                    n/=2;
                    ctr++;
                }
                else if(n % 3 == 0){
                    n = (2*n)/3;
                    ctr++;
                }
                else if(n % 5 == 0){
                    n = (4*n)/5;
                    ctr++;
                }
                 else if(  (n % 2 != 0 && n % 3 != 0) && (n % 5 != 0) ){
                    if(n != 1){
                        return -1; // end function if this condition is valid
                    }
                }
            }
            if(n == 1)
                return ctr; // end function if this condition is valid
}
int main()
{
    HossamFast();
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
}