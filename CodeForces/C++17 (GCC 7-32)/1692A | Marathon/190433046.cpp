#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int t, a, b, c, d, res = 0;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        vector<int>vec;
        if (a < b)
            vec.push_back(b);
        if (a < c)
            vec.push_back(d);
        if (a < d)
            vec.push_back(d);
        cout << vec.size() << endl;
    }
}