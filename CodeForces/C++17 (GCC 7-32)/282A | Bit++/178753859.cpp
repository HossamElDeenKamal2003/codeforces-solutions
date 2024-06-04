#include <iostream>
#define ll long long
#define el endl
using namespace std;
void Bit(){
    ll t;       //define testcase
    cin>>t;     //read test case
    ll sum=0;   //define sum
    for(ll i=0;i<t;i++){    //loop
        string x; //define string
        cin>>x;   //read string
        if(x=="++X" || x=="X++"){ // first check
           sum++; //increment sum
        }
        else      //second check
            sum--; //decrement sum
    }
    cout<<sum; //print sum
}
int main()
{
    Bit();
         //programmed by eng.hossam el deen kamal
    return 0;
}