#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int arr[3];
    while(t--){
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        sort(arr, arr+3);
        if(arr[1]+arr[2] >= 10)
            cout <<"YES"<<endl;
        else
            cout << "NO" << endl;
    }
return 0;
}