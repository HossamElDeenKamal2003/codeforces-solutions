#include <iostream>
 
using namespace std;
 
int main()
{
    int m,res=0;
    cin>>m;
    int arr1[m],arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i]>>arr2[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j])
                res++;
        }
 
    }
    cout<<res<<'\n';
    return 0;
}