#include <bits/stdc++.h>
#define ll long long
using namespace std;
// fast cout and cin function
void HossamFast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
 
 
int main()
{
    HossamFast();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x % 2)
                odd++;
            else
                even++;
        }
          if(odd % 2 || odd > 0 && even > 0)
            cout << "YES\n";
          else
            cout << "NO\n";
    }
}