#include <iostream>
#define unll unsigned long long
#define ll long long
#define el endl
using namespace std;
 
int main()
{
    unll num,k; // var
    cin>>num>>k; // read var
    // loop by k number
    for(int i=0;i<k;i++){
       if (num%10!=0)
            num--;
       else{
        num/=10;
       }
    }
    cout<<num; // print the number after process
    
    // prgrammed by eng.hossam eldeen kamal
    return 0;
}