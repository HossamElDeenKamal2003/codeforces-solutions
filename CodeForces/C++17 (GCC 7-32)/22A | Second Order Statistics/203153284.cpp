#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    set<int>s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() == 1){
        cout << "NO \n";
        exit(0);
    }
    cout << *(s.upper_bound(*(s.begin())));
}
 