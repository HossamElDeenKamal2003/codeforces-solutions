#include <iostream>
 
using namespace std;
 
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    //if()
    for(int i=1;i<=w;i++){
        sum=sum+(i*k);
    }
    if((sum-n)<0)
        cout<<"0";
    else
        cout<<sum-n;
    return 0;
}
// 1 2 1