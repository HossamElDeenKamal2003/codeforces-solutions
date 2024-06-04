#include <iostream>
#define unll unsigned long long
#define unl unsigned long
#define ll long long
#define el endl
using namespace std;
 
int main()
{
    unll testcase;   //define testcase
    cin>>testcase;  // read testcase
    ll sumx=0,sumy=0,sumz=0;       //define three variables
    while(testcase--){  // loop
        unll x,y,z;     //define three variables
        cin>>x>>y>>z;   //read three variables
        sumx+=x;        // add x columns to sumx
        sumy+=y;        // add y columns to sumy
        sumz+=z;        // add z columns to sumz
    }
    if (sumx==0&&sumy==0&&sumz==0)     // first case
        cout<<"YES"<<el;    // print "YES" if this condition is true
    else
        cout<<"NO"<<el;     // print "NO" if this condition is false
 
        // programmed by eng.hossam el deen kamal
    return 0;
}