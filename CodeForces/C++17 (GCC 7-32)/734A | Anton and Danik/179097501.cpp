#include <iostream>
#define unll unsigned long long
#define unl unsigned long
#define ll long long
#define el endl
using namespace std;
 
int main()
{
    unll t , sumA=0,sumD=0; //define three variables testcase,sumA and sumD
    cin>>t;                 // read testcase
    while (t--){            // loop using while
        char ch;            // define char variables
        cin>>ch;            // read char variables
        if(ch=='D')         // first case in loop
            sumD++;         // increase D counter
        else                // second case in loop
            sumA++;         // increase A counter
    }
    if(sumA>sumD)           // first case 
        cout<<"Anton"<<el;  // result of first case
    else if(sumA<sumD)      //second case 
        cout<<"Danik"<<el;  //result of second case
    else                    //third case
        cout<<"Friendship"<<el; //result of third case
        
        //PROGRAMMED BY ENG.HOSSAM EL DEEN KAMAL
    return 0;
}