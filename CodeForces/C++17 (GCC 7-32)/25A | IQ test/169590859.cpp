#include <iostream>
 
using namespace std;
 
int main()
{
     int n;
    cin>>n;
    int arr[n];
    int odd=0,even=0,sum_odd=0,sum_even=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            sum_even=i;
            even++;
        }
        else{
            sum_odd=i;
            odd++;
        }
    }
    if(odd>even)
        cout<<sum_even;
    else
        cout<<sum_odd;
 
        return 0;
    }
 
 