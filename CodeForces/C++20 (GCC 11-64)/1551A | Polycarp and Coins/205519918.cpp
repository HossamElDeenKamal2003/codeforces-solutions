#include <iostream>
 
using namespace std;
void solve(int n){
    int tmp=n/3;
 int tmp1=tmp;
 
 if(n%3==1)
  tmp++;
 if(n%3==2)
  tmp1++;
 cout<<tmp<<" "<<tmp1<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
 
 
}