#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    int n,sumeven=0,sumodd=0;
    cin>>t;
    while(t--)
    {
        sumeven=sumodd=0;
        cin>>n;
        if(n%4!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                sumeven+=i;
            }
            for(int i=1; i<n-2; i+=2){
                cout<<i<<" ";
                sumodd+=i;
            }
            cout<<sumeven-sumodd<<"\n";
        }
    }
 
    return 0;
}