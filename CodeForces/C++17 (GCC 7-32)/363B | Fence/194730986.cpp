#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
int main()
{
    int n,z,t=INT_MAX, k ;
    cin >>n >>k;
    int arr[150002];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i] += arr[i - 1];
    }
    for (int i = k;i <= n;i++)
 {
  if (t > arr[i] - arr[i - k])
  {
   t = arr[i] - arr[i - k];
   z = i;
  }
 
 
 }
 cout << z - k + 1;
    return 0;
}