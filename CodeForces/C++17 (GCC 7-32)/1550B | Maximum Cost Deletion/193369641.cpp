#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int ctr=0;
        for(int i=0;i<s.length();i++){
            if (s[i]!=s[i+1]){
                ctr++;
            }
        }
        int maxx = a*n + ((b>=0) ? (b*n):(b*(ctr/2+1)));
        cout<<maxx<<endl;
    }
    return 0;
}