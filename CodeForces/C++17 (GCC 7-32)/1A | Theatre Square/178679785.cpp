#include <iostream>
#define unll unsigned long long
#define unl unsigned long
#define ll long long
#define el endl
using namespace std;
void fun(){
    ll len, width, a;  // define length, width and area of flagstone
    ll x, y, sum;
    cin >> len >> width >> a; //read length and width
    x = len / a;
    y = width / a;
    if (len % a != 0) {
        x++;
    }
    if (width % a != 0) {
        y++;
    }
    sum = x * y;
    cout << sum;
 
}
int main()
{
    fun();
    //programmed by eng . hossam el deen kamal
    return 0;
}