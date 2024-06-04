#include <bits/stdc++.h>
 
using namespace std;
 
int main(void)
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        unsigned long long a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            cout<<b-(a%b)<<endl;
        }
    }
}