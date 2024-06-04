#include <bits/stdc++.h>
#define ll long long
using namespace std;
// fast cout and cin function
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
void solve(){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ctr1 = 0, ctr2 = 0;
        bool flag = false;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'R')
                ctr1++;
            else if(str[i] == 'L')
                ctr1--;
            else if (str[i] == 'U')
                ctr2++;
            else
                ctr2--;
 
            if(ctr1 == 1){
                if(ctr2 == 1){
                    flag = true;
                }
            }
        }
        if(flag == true){
            cout << "YES" << endl;
        }
        else
            cout << "No" << endl;
    }
int main()
{
    HossamFast();
    int t;
    cin >> t;
    while(t--)
        solve();
}