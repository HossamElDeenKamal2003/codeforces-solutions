#include <bits/stdc++.h>
#define el endl
#define ll long long
#define unll unsigned long
using namespace std;
 
int main()
{
    string str; // define string  var
    cin>>str; //read string var
    sort(str.begin(),str.end()); //sort string
    unll len=str.length(); //length of string
    int ctr=0; //define counter
    //loop
    for(int i=1; i<len; i++)
    {
        if(str[i]!=str[i-1])
            ctr++;
    }
    if(ctr&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
        
    //programmed by eng.hossam el deen kamal
    return 0;
}