#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,c,d,res=0;
    cin>>a>>b>>c>>d;
    int arr[]={a,b,c,d};
    sort(arr,arr+4);
    for(int i=0;i<4;i++){
        if(arr[i]==arr[i+1])
            res++;
    }
    cout<<res<<'\n';
    return 0;
}