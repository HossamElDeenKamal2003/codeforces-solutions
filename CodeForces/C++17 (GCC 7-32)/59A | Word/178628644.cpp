#include <bits/stdc++.h>
#define el endl
#define ll long long
#define unll unsigned long
using namespace std;
 
int main()
{
    string str; // define variable
    cin>>str; // read variables
    unll ctrup=0; // counter for number of upper
    unll ctrlo=0; //counter for number of lower
    //loop
    for (int i=0;i<str.size();i++){
        if (str[i]>=65&&str[i]<=90)
            ctrup++;
        else
            ctrlo++;
    }
    if (ctrup==ctrlo || ctrup<ctrlo){
            transform(str.begin(), str.end(), str.begin(), ::tolower); // convert letters to lower
            cout<<str<<endl;
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::toupper); // convert letters to upper
        cout<<str<<endl;
    }
        // programmed by eng.hossam eldeen kamal
    return 0;
}