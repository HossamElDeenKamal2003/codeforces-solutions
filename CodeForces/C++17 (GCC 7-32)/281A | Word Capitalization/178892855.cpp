#include <iostream>
 
using namespace std;
void cap(){
    string str; //define string
    cin>>str; // read string
    str[0]=toupper(str[0]); // convert first letter of string from lower to upper
    cout<<str; // print string after process
 
}
int main()
{
    cap();
        //programmed by eng.hossam el deen kamal 
    return 0;
}