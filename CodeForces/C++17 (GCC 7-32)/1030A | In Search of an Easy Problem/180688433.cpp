#include <iostream>
using namespace std;
 
int main()
{
    int n,ctr=0;
    cin >> n;
    int arr[n];
    while(n--) {
        int i=0;
        cin >> arr[i];
        if(arr[i]==1){
            ctr+=arr[i];
            }
        i++;
 
    }
    if(ctr>0)
        cout<<"HARD";
    else
        cout<<"EASY";
    return 0;
}