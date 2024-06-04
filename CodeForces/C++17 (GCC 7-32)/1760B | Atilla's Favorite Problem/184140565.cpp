#include <bits/stdc++.h>
#include <string>
using namespace std;
// ab cd ef gh ij kl mn op qr st uv w
int main(void)
{
    int t;
    cin>>t;
    int n;
    while(t--){
    cin>>n;
    string str;
    cin>>str;
 
    sort(str.begin(),str.end());
        int len=str.length();
     if (str[len-1]=='a')
        cout<<1<<endl;
    else if(str[len-1]=='b')
        cout<<2<<endl;
    else if(str[len-1]=='c')
        cout<<3<<endl;
        else if(str[len-1]=='d')
        cout<<4<<endl;
    else if(str[len-1]=='e')
        cout<<5<<endl;
    else if(str[len-1]=='f')
        cout<<6<<endl;
    else if(str[len-1]=='g')
        cout<<7<<endl;
    else if(str[len-1]=='h')
        cout<<8<<endl;
    else if(str[len-1]=='i')
        cout<<9<<endl;
    else if(str[len-1]=='j')
        cout<<10<<endl;
    else if(str[len-1]=='k')
        cout<<11<<endl;
     else if(str[len-1]=='l')
        cout<<12<<endl;
     else if(str[len-1]=='m')
        cout<<13<<endl;
     else if(str[len-1]=='n')
        cout<<14<<endl;
     else if(str[len-1]=='o')
        cout<<15<<endl;
     else if(str[len-1]=='p')
        cout<<16<<endl;
     else if(str[len-1]=='q')
        cout<<17<<endl;
     else if(str[len-1]=='r')
        cout<<18<<endl;
     else if(str[len-1]=='s')
        cout<<19<<endl;
     else if(str[len-1]=='t')
        cout<<20<<endl;
     else if(str[len-1]=='u')
        cout<<21<<endl;
    else if(str[len-1]=='v')
        cout<<22<<endl;
     else if(str[len-1]=='w')
        cout<<23<<endl;
     else if(str[len-1]=='x')
        cout<<24<<endl;
     else if(str[len-1]=='y')
        cout<<25<<endl;
     else if(str[len-1]=='z')
        cout<<26<<endl;
    }
 
}
 