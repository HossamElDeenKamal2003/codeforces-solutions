#include <iostream>
#define ll long long
#define el endl
 
using namespace std;
 
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]==1){
            if (arr[i]==1&&arr[i+1]==0&&arr[i+2]==1){
                sum++;
                i+=2;
            }
        }
    }
    cout<<sum<<el;
    return 0;
}