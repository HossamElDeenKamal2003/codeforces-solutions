#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ctr = 0,m = 1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] >= arr[i-1])
        {
          ctr++;
          m = max(m, ctr);
        }
        else
        {
            ctr = 1;
        }
    }
    cout << m<<'\n';
}