#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define el endl
using namespace std;
int main()
{
    ll n; //define var
    string str; //define string
    cin>>str; // read string
    n = str.length(); // length of string
    transform(str.begin(),str.end(),str.begin(), ::tolower); // process to convert upper to lower
    // loop to check the string
    for( int i=0; i<n; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'|| str[i]=='Y'||str[i]=='y' )
            continue; // ignore vowels letter
        else{
            cout<<".";
            cout<<str[i];
        }
    }
    // programmed by eng. hossam el deen kamal
    return 0;
}