#include <bits/stdc++.h>
 
using namespace std;
long long arr[1000000];
int main()
{
    long long n, ctr1 = 0, ctr2 = 0, ctr3 = 0;
    cin >> n;
    for(long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
            ctr1++;
        if(arr[i] == 2)
            ctr2++;
        if(arr[i] == 3)
            ctr3++;
    }
    if(ctr1 >= ctr2 && ctr1 >= ctr3){
        cout << ctr2 + ctr3 << '\n';
        exit(0);
        }
    if(ctr2 >= ctr3 && ctr2 >= ctr1){
        cout << ctr1 + ctr3 << '\n';
        exit(0);
    }
    if(ctr3 >= ctr2 && ctr3 >= ctr1){
        cout<< ctr1 + ctr2 << '\n';
        exit(0);
    }
 
}