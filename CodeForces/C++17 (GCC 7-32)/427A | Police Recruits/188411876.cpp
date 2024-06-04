#include <iostream>
 
using namespace std;
 
int main()
{
    int size; // 3
 cin>>size;
 int p = 0;
 int res = 0;
 for(int i=1;i<=size;i++){ // 1 2 3
  int num;
  cin>>num;
  if(num == -1){
   if(p > 0){
    p--;
   } else {
    res++;
   }
  }
    else {
   p += num;
  }
 }
 cout<<res<<endl;
 
    return 0;
}