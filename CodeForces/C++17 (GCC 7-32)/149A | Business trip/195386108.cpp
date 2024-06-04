#include <bits/stdc++.h>
 
using namespace std;
int arr[12];
int main()
{
    int k, total(0);
    cin >> k;
    for (size_t i = 0; i < 12; ++i)
    {
        cin >> arr[i];
        total += arr[i];
    }
 
    if (total < k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(arr, arr + sizeof(arr) / sizeof(arr[0]), greater<int>());
        int sum = 0;
        int month = 0;
        while (sum < k)
        {
            sum += arr[month];
            month += 1;
        }
        cout << month << endl;
    }
 
    return 0;
}