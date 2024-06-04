#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t,a, b, c, x, y;;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> x >> y;
        int res = 0;
        if(x > a)
            res+=(x-a);
        if(y > b)
            res+=(y-b);
        if(res <= c)
            cout<<"YES \n";
        else
            cout<<"NO\n";
    }
}