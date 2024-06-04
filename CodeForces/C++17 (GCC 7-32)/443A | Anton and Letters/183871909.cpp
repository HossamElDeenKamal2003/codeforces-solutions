#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    int ctr=0;
    string str;
    getline(cin,str);
    str.erase(remove(str.begin(), str.end(), ','), str.end());
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    str.erase(remove(str.begin(), str.end(), '{'), str.end());
    str.erase(remove(str.begin(), str.end(), '}'), str.end());
    sort(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[i+1]){
            ctr++;
        }
    }
    cout<<ctr<<endl;
    return 0;
}