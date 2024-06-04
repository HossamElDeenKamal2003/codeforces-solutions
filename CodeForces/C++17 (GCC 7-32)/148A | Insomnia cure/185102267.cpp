#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned long k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    unsigned long ctr=d;
    if(k==1 || m==1 || l==1 || n==1){
        cout<<d;
        exit(0);
    }
    else{
        for(int i=1;i<=d;i++){
            if(i%k!=0 && i%l!=0 && i%m!=0 &&i%n!=0){
                ctr--;
            }
        }
    }
    cout<<ctr;
    return 0;
}