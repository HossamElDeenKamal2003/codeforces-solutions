#include <iostream>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long len,n,ctr=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i+=2){ // bbbb
        if((str[i]=='b') && (str[i+1]=='b')){
            str[i+1]='a';
            ctr++;
        }
        else if((str[i]=='a') && (str[i+1]=='a')){
            str[i+1]='b';
            ctr++;
        }
    }
    cout<<ctr<<endl;
    cout<<str<<endl;
    return 0;
}