#include <iostream>
 
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int sum;
   if(n>5)
   {
       sum=n/5;
        if (n%5!=0)
            sum++;
         cout<<sum;
   }
 
   if(n<=5)
    cout<<"1";
    return 0;
}