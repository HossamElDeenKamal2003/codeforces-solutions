#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        for(int i=0;i<str.length()-1;i+=2){
            cout<<str[i];
        }
        cout<<str[str.length()-1]<<endl;
    }
    return 0;
}