#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    string s;
    cin>>n>>s;
    int ctrq=0,ctra=0;
    for(int i=0;i<n;i++){
 
        if(s[i]=='Q'){
            ctrq++;
        }
        else{
            ctrq--;
        }
        if (ctrq <= 0)
        {
            ctra = 0;
            ctrq = 0;
        }
    }
    if(ctrq==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    // programmed by end. hossam el deen kamal
    return 0;
}
 