#include <iostream>
#define el endl
#define unll unsigned long long
#define unl unsigned long
#define ll long long
#define l long
using namespace std;
void fun(){
    unll testcase; // define testcase var
    cin>>testcase; // read testcase
    ll x,y,z,ctr=0; //define variables
    while(testcase--){ //loop
        cin>>x>>y>>z; //read variables in loop
        if((x+y+z)>1) //case
            ctr++; // increase counter
    }
    cout<<ctr; //print counter
}
int main()
{
    fun(); //call function
 
        // programmed by eng.hossam el deen kamal
    return 0;
}