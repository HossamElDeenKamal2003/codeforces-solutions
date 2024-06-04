#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned int d1,d2,d3;
    cin>>d1>>d2>>d3;
    //int s1=d1+d2+d3,s2=d1+d2+d1+d2,s3=d1+d3+d1+d3,s4=d2+d2+d1+d1;
   // int m=min(s1,s2);
    //int x=min(s3,s4);
    //int res=min(m,x);
   // cout<<res<<'\n';
    cout<<min(d1+d2+d3,min((d1+d2)*2,min((d1+d3)*2,(d2+d3)*2)))<<'\n';
 
    return 0;
}
//min(d1+d2+d3,min((d1+d2)*2,min((d1+c)*2,(d2+c)*2)))