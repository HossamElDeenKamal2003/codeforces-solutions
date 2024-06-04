#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, x, arr[5]= {0};
    cin >> n;
   for(int i = 0; i  < n; i++){
        cin >> x;
        arr[x] += 1;
    }
    int total = arr[4] + arr[3] + arr[2] / 2;
    arr[1] -= arr[3];
    if (arr[2] % 2 == 1)
    {
        total += 1;
        arr[1] -= 2;
    }
    if (arr[1] > 0)
    {
        total += (arr[1] + 3) / 4;
    }
    cout << total << endl;
}