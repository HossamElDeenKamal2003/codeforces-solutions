#include <iostream>
using namespace std;
 
int main()
{
    int t, num1, num2,  ctr = 0;
    cin >> t;
    while (t--)
    {
        cin >> num1 >> num2;
        if (num2-num1 >= 2)
        {
            ctr++;
        }
    }
    cout << ctr << '\n';
}
/*
3
1 2
2 3
3 4
*/