#include <iostream>
 
using namespace std;
 
int main()
{
    int n,ctr=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if (str[i]==str[i+1])
            ctr++;
    }
    cout<<ctr;
    return 0;
}