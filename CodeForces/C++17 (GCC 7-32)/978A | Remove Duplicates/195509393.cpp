#include <bits/stdc++.h>
 
using namespace std;
int arr[50];
int main()
{
    int n, pos[1005];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    fill(pos,pos+1005,0);
 
    vector<int>vec;
    for(int i=n-1; i>=0; i--){
        if(pos[arr[i]]==0){
            pos[arr[i]]=1;
            vec.push_back(arr[i]);
        }
    }
    cout<<vec.size()<<endl;
    int s;
    s=vec.size();
    for(int i=s-1; i>=0; i--)
        cout<<vec[i]<<" ";
    cout<<endl;
 
}