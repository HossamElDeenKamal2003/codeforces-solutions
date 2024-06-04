#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        int n;
        cin>>n;
        sum=n/2;
        if(n%2==0){
            sum--;
            cout<<sum<<'\n';
        }
        else
            cout<<sum<<'\n';
    }
 
    return 0;
}