#include<bits/stdc++.h>
#define el endl
#define ll long long
using namespace std;
 
int main(){
    ll n;
    cin>>n;
    string str="ROYGBIV";
    for(int i=7;i<n;i++){
        str+=str[i-4];
 
    }
    cout<<str<<endl;
    return 0;
}