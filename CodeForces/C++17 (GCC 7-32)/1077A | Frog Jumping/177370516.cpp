#include <iostream>
#define ll long long
#define el endl
using namespace std;
 
int main()
{
    ll x;
    cin>>x;
    while(x--){
    ll num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num3%2!=0){
       ll sum1=num3/2;
       ll sum2=sum1*num1;
       ll sum3=sum1*num2;
        cout<<(sum2-sum3)+num1<<el;
    }
    else
        cout<<(num1-num2)*num3/2<<el;
}
    return 0;
}