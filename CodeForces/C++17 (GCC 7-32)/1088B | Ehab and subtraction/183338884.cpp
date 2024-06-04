#include <iostream>
#include <algorithm>
 
using namespace std;
 
void fun(int n){
    for(int i = 0 ; i < n ; i++){
        cout << 0 << endl;
    }
}
void fun2(){
    int n , k;
    cin >>  n >> k;
    int a[n];
 
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
 
    if(n == 1){
            cout << a[0] << endl;
            fun(k-1);
            exit(0);
    }
    sort(a , a+n);
 
    int x = 0;
    int y = 0;
 
        for(int i = 0 ; i < n-1 ; i++){
            if(y == 0 && a[i] != 0){
                    cout << a[i] << endl;
                    y++;
                    if(y == k){
                        break;
                    }
            }
            if(y > 0){
               if(a[i + 1] > a[i]){
                cout << abs(a[i+1] - a[i]) << endl;
                x++;
               }
            }
 
            if((x + y) == k){
                break;
            }
        }
 
        fun(k-(x + y));
 
}
int main()
{
    fun2();
    return 0;
}