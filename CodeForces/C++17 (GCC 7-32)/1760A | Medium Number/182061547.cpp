#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x=3;
    int arr[x];
    for(int i=0;i<t;i++){
        for(int i=0;i<x;i++){
            cin>>arr[i];
        }
        sort(arr,arr+x);
         cout<<arr[1]<<endl;
    }
 
    return 0;
}