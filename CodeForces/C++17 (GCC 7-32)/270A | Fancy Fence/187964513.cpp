#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned t,n;
    cin>>t;
    //int sum=0;
    while(t--){
        cin>>n;
        if(360%(180-n)==0)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}