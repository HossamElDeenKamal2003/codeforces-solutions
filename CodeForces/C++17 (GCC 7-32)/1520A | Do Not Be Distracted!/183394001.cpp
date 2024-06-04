#include <bits/stdc++.h>
 
using namespace std;
 
int main(void)
{
     unsigned t;
     cin >> t;
     bool flag=0;
     while(t--)
        {
          unsigned long long n;
          cin>>n;
          string str1,str2;
          cin>>str1;
          unsigned long long len=str1.size();
          for(int i=0;i<len;i++)
          {
            if(str1[i]!=str1[i+1]){
                str2+=str1[i];
            }
          }
          sort(str2.begin(),str2.end());
          for(int i=0;i<str2.size();i++)
          {
            if(str2[i]==str2[i+1])
            {
                    flag=0;
                    break;
            }
            else
                flag=1;
          }
          if(flag){
            cout<<"yes"<<endl;
            str2="";
         }
          else
            cout<<"no"<<endl;
            str2="";
         }
}