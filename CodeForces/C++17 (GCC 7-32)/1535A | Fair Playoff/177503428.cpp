#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int num1,num2,num3,num4;
        cin>>num1>>num2>>num3>>num4;
        int max_1=max(num1,num2);
        int min_1=min(num1,num2);
        int max_2=max(num3,num4);
        int min_2=min(num3,num4);
        if (max_1>min_2 && max_2>min_1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}