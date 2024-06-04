#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1>>str2;
        int ctr=0;
        for(int i=0;i<n;i++){
            if((str1[i] == 'R' && str2[i] != 'R') || (str2[i] == 'R' && str1[i] != 'R')){
                ctr++;
                break;
            }
        }
        if(ctr>0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}