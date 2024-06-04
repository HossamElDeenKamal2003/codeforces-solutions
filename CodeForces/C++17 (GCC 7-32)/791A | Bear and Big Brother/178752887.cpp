#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b; // define var
    cin>>a>>b; // read var
    int years=0; //define counter
    while(a<=b) // loop
    {
        a*=3; //triple weight
        b*=2;
        years++; //increase counter
    }
    cout<<years; //print counter
    return 0;
}