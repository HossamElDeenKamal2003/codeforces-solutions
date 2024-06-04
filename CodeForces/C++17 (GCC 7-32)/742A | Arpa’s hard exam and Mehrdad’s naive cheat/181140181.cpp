#include <iostream>
#include <cmath>
using namespace std;
struct fun{
    long long n,res;
};
int main()
{
    fun x;
    cin>>x.n;
    if(x.n==0){
        cout<<1<<endl;
        exit(0);
    }
    if(x.n%4==0){
        cout<<"6"<<endl;
         exit(0);
    }
    else if(x.n%4==1){
        cout<<"8"<<endl;
         exit(0);
    }
    else if(x.n%4==2){
         cout<<"4"<<endl;
          exit(0);
    }
    else if(x.n%4==3){
        cout<<"2"<<endl;
        exit(0);
    }
 
    return 0;
}