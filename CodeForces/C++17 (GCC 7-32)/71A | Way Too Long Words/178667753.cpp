#include <iostream>
#define el endl
#define unll unsigned long long
#define unl unsigned long
#define ll long long
#define l long
using namespace std;
void fun(){
    ll testcase; //define testcase
    cin>>testcase; // read testcase
    while(testcase--)//while loop
    {
    string str; // define string var
    cin>>str;//read string var
    l len=str.length(); // length ofstring
    if (len<=10) //first case
        cout<<str<<el;
    else if (len>10){  // secondcase
        cout<<str[0]; // print first digit
        cout<<len-2; //print number of (length-2)
        cout<<str[len-1]<<el; //print last digit
        }
   }
}
 
int main()
{
    fun(); // call function
    // programmed by eng.hossam el deen kamal
   return 0;
}