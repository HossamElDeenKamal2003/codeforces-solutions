#include <iostream>
 
using namespace std;
 
int main()
{
    int n,res=0;
    cin>>n;
    int arr[5]={100,20,10,5,1};
    for(int i=0; i<5; i++)
    {
        res+=n/arr[i];
        n=n%arr[i];
    }
    cout<<res<<'\n';
    return 0;
}
 
 
 