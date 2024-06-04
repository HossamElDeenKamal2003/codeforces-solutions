#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    unsigned int ctr=0;
    string str;
    getline(cin,str);
    str.erase(remove(str.begin(), str.end(), ','), str.end());
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    str.erase(remove(str.begin(), str.end(), '{'), str.end());
    str.erase(remove(str.begin(), str.end(), '}'), str.end());
    sort(str.begin(),str.end());
    for(unsigned int i=0;i<str.size();i++){
        if(str[i]!=str[i+1]){
            ctr++;
        }
    }
    cout<<ctr<<endl;
    return 0;
}