#include <iostream>
 
using namespace std;
int main()
{
    int t,l,r,ans=0;
 
    int arr[100005];
    string s;
 
    cin>>s>>t;
 
    for(int i=1;i<s.size();i++){
 
        if(s[i]==s[i-1])
            ans++;
 
        arr[i]= ans;
 
    }
 
    while(t--){
        cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<endl;
    }
 
    return 0;
}