#include<bits/stdc++.h>
#define ll long long
#define unll unsigned long long
#define unl unsigned long
#define el endl
using namespace std;
void next_round(){
    unll n,k,ctr=0;  // define n,k and counter
 cin>>n>>k;       //read n and k
 ll arr[n];      //define array
 for(int i=0;i<n;i++){ // first loop to read array
     cin>>arr[i];      //read array
 }
 k=arr[k-1];
 for(int i=0;i<n;i++){
     if(arr[i]>=k && arr[i]!=0) // first case
     ctr++; // increase counter
 }
    cout<<ctr; // print counter "outside any loop"
}
int main () {
        next_round();
        //programmed by eng.hossam el deen kaml
        return 0;
 
}