#include <iostream>
using namespace std;
int main()
{
    long long n, h, ctr = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            ctr += 2;
        }
        else if (arr[i] == h)
            ctr++;
        else
            ctr++;
    }
    cout << ctr << endl;
    return 0;
}