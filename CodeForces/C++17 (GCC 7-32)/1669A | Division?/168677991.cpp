#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if (x>=1900)
            cout<<"Division 1"<<endl;
        else if(x>=1600&&x<=1899)
            cout<<"Division 2"<<endl;
        else if(x>=1400&&x<=1599)
            cout<<"Division 3"<<endl;
        else
            cout<<"Division 4"<<endl;
 
 
    }
    return 0;
}