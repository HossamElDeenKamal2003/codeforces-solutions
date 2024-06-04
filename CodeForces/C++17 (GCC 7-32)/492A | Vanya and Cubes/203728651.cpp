#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b=0,c=1;
    cin>>a;
    while(a>=c) {
        b++;
        c=c+b;
        a=a-c;
    }
    cout<<b;
 
}
 