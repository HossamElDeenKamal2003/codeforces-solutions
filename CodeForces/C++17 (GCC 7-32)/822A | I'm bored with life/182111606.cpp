#include <iostream>
 
using namespace std;
 
int main()
{
   long long a,b,sum=1;
 cin>>a>>b;
 if(a<=b)
 {
  for(int i=a;i>=1;i--)
  {
  sum=sum*i;
  }
  cout<<sum;
 }
 else
 {
  for(int i=b;i>=1;i--)
  {
  sum=sum*i;
     }
 cout<<sum;
 }
 
    return 0;
}