#include <bits/stdc++.h>
 
using namespace std;
void Hossam(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
}
int main()
{
    Hossam();
    int t,m;
    cin>>t;
    while(t--){
        cin>>m;
        string str,x;
        cin>>str;
        int ctr=0;
        for(int i=1;i<m;i++){
            if(str[i]=='1'){
                ctr++;
            }
            if(ctr%2!=0){
                x='-';
            }
            else
            x='+';
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}