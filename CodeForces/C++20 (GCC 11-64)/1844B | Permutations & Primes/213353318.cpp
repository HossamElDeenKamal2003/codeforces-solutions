#include <bits/stdc++.h>
#define ll long long
using namespace std;
// fast cout and cin function
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
bool prime(int num){
    if(num <= 1)
        return false;
    for(int i = 2; i*i <= 1; i++){
        if(num%i==0)
            return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        vec[0] = 2, vec[n - 1] = 3, vec[n / 2] = 1;
        int ctr = 4;
        for(int i = 1; i < n-1; i++){
            if(i == n/2)
                continue;
            vec[i] = ctr++;
        }
        for(int i = 0; i < n; i++)
            cout << vec[i] << ' ';
        cout << endl;
    }
}