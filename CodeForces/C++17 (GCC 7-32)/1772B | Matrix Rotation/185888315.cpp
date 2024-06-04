#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned long t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if((a<b&&a<c&&c<d&&b<d)||(c<a&&c<d&&d<b&&a<b)||(d<c&&b<a&&d<b&&c<a)||(b<d&&b<a&&a<c&&d<c)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}