#include <iostream>
 
using namespace std;
 
int main()
{
 
    int num,count=0;
    cin >> num;
    int arr[]={4,7,47,74,444,447,474,477,744,747,774,777};
    for(int i=0;i<12;i++)
    {
        if(num%arr[i]==0)
        {
            count=1;
            break;
        }
    }
    if(count==1)
        cout << "YES" << endl;
 
    else
        cout << "NO" << endl;
    return 0;
    }
 