#include <iostream>
#define ll long long
#define unll unsigned long long
#define el endl
using namespace std;
 
int main()
{
    ll testcase;          //define testcase
    cin >> testcase;        //read testcase
    ll x, y;
    ll sum = 0,k = 0;
    for(int i = 0; i < testcase; i++){   //LOOP
        cin >> x >> y;           // read x and y in loop
        sum = (x + k) - y;      //update sum val
        if(sum < 0) //first condition
            k = 0;
        else        // second condition
            k = sum;
    }
    cout << sum;       //print sum after process
 
        //PROGRAMMED BY ENG.HOSSAM EL_DEEN KAMAL
    return 0;
}