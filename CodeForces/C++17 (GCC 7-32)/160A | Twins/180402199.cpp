#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  int arr[n];
  int sum=0,ctr=0;
  for(int i=0;i<n;i++){
   cin>>arr[i];
   sum+=arr[i];
  }
  sum=sum/2;
  sort(arr,arr+n);
  int sum2=0;
  for(int i=n-1;i>=0;i--){
   sum2+=arr[i];
   ctr++;
  if(sum2>sum){
    break;
  }
 
 
  }
 
  cout<<ctr;
 
    return 0;
}