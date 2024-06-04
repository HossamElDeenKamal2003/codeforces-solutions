#include <iostream>
 
using namespace std;
 
int main()
{
    string str;
    int ctr=0;
    cin>>str;
    for (int i=0;i<str.size();i++)
    {
       if(str[i]>=33&&str[i]<=126){
     if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
            ctr++;
       }
    }
    //cout<<ctr;
    if(ctr>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}