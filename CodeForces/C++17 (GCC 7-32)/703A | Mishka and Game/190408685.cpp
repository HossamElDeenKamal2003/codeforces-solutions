#include <iostream>
 
using namespace std;
void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve(){
    int n,num1,num2,equal=0,mishka=0,chris=0;
    cin>>n;
    while(n--){
        cin>>num1>>num2;
        if(num1>num2)
            mishka++;
        else if (num1<num2)
            chris++;
        else
            equal++;
    }
    if(mishka>chris)
        cout<<"Mishka\n";
    else if (mishka<chris)
        cout<<"Chris \n";
    else
        cout<<"Friendship is magic!^^ \n";
}
int main()
{
    fast();
    solve();
}