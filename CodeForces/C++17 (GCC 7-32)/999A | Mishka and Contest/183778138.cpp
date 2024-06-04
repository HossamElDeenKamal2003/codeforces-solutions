#include<iostream>
using namespace std;
 
int main()
{
    unsigned long long t,k,sum=0;
    cin>>t>>k;
    unsigned long long i=0,n=t-1;
    unsigned long long arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    while((arr[i]<=k)||(arr[n]<=k&&i<=t-1)){
        if(arr[i]<=k){
            sum++;
            i++;
        }
        else if(arr[n]<=k){
            sum++;
            n--;
        }
    }
    cout<<sum<<endl;
    }