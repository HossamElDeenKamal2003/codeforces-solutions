#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    int arr[7];
    int i;
    for(i=1;i<8;i++){
        cin>>arr[i];
    }
    for(i=1;i<8;i++){
        sum=sum+arr[i];
    if(sum>=n){
        cout<<i<<endl;
    break;
    }
    if(i==7){i=0;}
}
    return 0;
}