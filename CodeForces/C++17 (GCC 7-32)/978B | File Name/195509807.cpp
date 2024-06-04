#include <bits/stdc++.h>
 
using namespace std;
int arr[50];
int main()
{
    int n, ctr = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x')
            ctr++;
    }
    cout << ctr <<endl;
}