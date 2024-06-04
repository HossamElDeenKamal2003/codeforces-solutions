#include <bits/stdc++.h>
 
using namespace std;
void Hossam(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    Hossam();
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int m = INT_MAX;
    int x = -1;
    int y = -1;
    for (int i = 0; i < n; ++i) {
        if (m>abs(arr[i]-arr[(i+1)%n])){
            x = i;
            y = (i+1)%n;
            m = abs(arr[i]-arr[(i+1)%n]);
        }
    }
    cout<<x+1<<" "<<y+1;
    return 0;
}